#include <lowi/register_map.hh>

#include <utility>

namespace lowi
{
	bool register_map_item::operator==(const register_map_item& map_item) const
	{
		return equal(map_item);
	}
	bool register_map_item::operator==(const ptr& map_item) const
	{
		return equal(map_item);
	}
	bool register_map_item::operator!=(const register_map_item& map_item) const
	{
		return !equal(map_item);
	}
	bool register_map_item::operator!=(const ptr& map_item) const
	{
		return !equal(map_item);
	}

	bool register_map_item::equal(const ptr& map_item) const
	{
		return equal(*map_item);
	}
}

namespace lowi
{
	register_map_item_basic::register_map_item_basic() noexcept
		: size_(0)
	{}
	register_map_item_basic::register_map_item_basic(std::size_t size) noexcept
		: size_(size)
	{}
	register_map_item_basic::register_map_item_basic(const register_map_item_basic& map_item) noexcept
		: size_(map_item.size_)
	{}
	register_map_item_basic::register_map_item_basic(register_map_item_basic&& map_item) noexcept
		: size_(std::move(map_item.size_))
	{}

	register_map_item_basic& register_map_item_basic::operator=(const register_map_item_basic& map_item) noexcept
	{
		return assign(map_item);
	}
	register_map_item_basic& register_map_item_basic::operator=(register_map_item_basic&& map_item) noexcept
	{
		return assign(std::move(map_item));
	}
	bool register_map_item_basic::operator==(const register_map_item_basic& map_item) const noexcept
	{
		return equal(map_item);
	}
	bool register_map_item_basic::operator!=(const register_map_item_basic& map_item) const noexcept
	{
		return !equal(map_item);
	}

	register_map_item_basic& register_map_item_basic::assign(const register_map_item_basic& map_item) noexcept
	{
		size_ = map_item.size_;
		return *this;
	}
	register_map_item_basic& register_map_item_basic::assign(register_map_item_basic&& map_item) noexcept
	{
		size_ = std::move(map_item.size_);
		return *this;
	}
	bool register_map_item_basic::equal(const register_map_item_basic& map_item) const noexcept
	{
		return size_ == map_item.size_;
	}

	std::size_t register_map_item_basic::size() const noexcept
	{
		return size_;
	}
	std::size_t register_map_item_basic::size(std::size_t new_size) noexcept
	{
		return size_ = new_size;
	}
}

namespace lowi
{
	register_map::register_map(const std::vector<register_map_item::ptr>& map)
		: map_(map)
	{}
	register_map::register_map(const register_map& map)
		: map_(map.map_)
	{}
	register_map::register_map(register_map&& map) noexcept
		: map_(std::move(map.map_))
	{}

	register_map& register_map::operator=(const register_map& map)
	{
		return assign(map);
	}
	register_map& register_map::operator=(register_map&& map) noexcept
	{
		return assign(std::move(map));
	}
	bool register_map::operator==(const register_map& map) const
	{
		return equal(map);
	}
	bool register_map::operator!=(const register_map& map) const
	{
		return !equal(map);
	}
	register_map_item::ptr register_map::operator[](std::size_t offset)
	{
		return at(offset);
	}

	register_map& register_map::assign(const register_map& map)
	{
		map_ = map.map_;
		return *this;
	}
	register_map& register_map::assign(register_map&& map) noexcept
	{
		map_ = std::move(map.map_);
		return *this;
	}
	bool register_map::equal(const register_map& map) const
	{
		if (this == &map)
			return true;
		if (map_.size() != map.map_.size())
			return false;

		for (std::size_t i = 0; i < map_.size(); ++i)
		{
			if (!map_[i]->equal(*map.map_[i]))
			{
				return false;
			}
		}

		return true;
	}
	register_map_item::ptr register_map::at(std::size_t offset)
	{
		if (map_.size() == 0)
			throw std::invalid_argument("This register_map instance is empty.");

		if (offset == 0)
		{
			return map_[0];
		}

		std::size_t for_offset = 0;

		for (const register_map_item::ptr& map : map_)
		{
			if (for_offset + map->size() > offset)
			{
				return map;
			}

			for_offset += map->size() - 1;
		}

		throw std::out_of_range("'offset' is out of range.");
	}

	const register_map register_map::empty;
}