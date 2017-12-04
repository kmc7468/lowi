#include <lowi/register_map.hh>

#include <lowi/register_type.hh>

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
	register_map_item_basic::register_map_item_basic(std::uint32_t size) noexcept
		: size_(size)
	{}
	register_map_item_basic::register_map_item_basic(const register_map_item_basic& map_item) noexcept
		: size_(map_item.size_)
	{}
	register_map_item_basic::register_map_item_basic(register_map_item_basic&& map_item) noexcept
		: size_(std::move(map_item.size_))
	{}

	bool register_map_item_basic::operator==(const register_map_item_basic& map_item) const noexcept
	{
		return equal(map_item);
	}
	bool register_map_item_basic::operator!=(const register_map_item_basic& map_item) const noexcept
	{
		return !equal(map_item);
	}
	register_map_item_basic register_map_item_basic::operator+(const register_map_item_basic& map_item) const
	{
		return size_ + map_item.size_;
	}
	register_map register_map_item_basic::operator+(const register_map_item_register& map_item) const
	{
		register_map this_map = *this;
		register_map other_map = map_item;

		return this_map + other_map;
	}
	register_map_item_basic register_map_item_basic::operator+(std::uint32_t size) const
	{
		return size_ + size;
	}

	bool register_map_item_basic::equal(const register_map_item& map_item) const
	{
		if (dynamic_cast<const register_map_item_basic*>(&map_item) == nullptr)
		{
			return false;
		}
		else
		{
			return equal(dynamic_cast<const register_map_item_basic&>(map_item));
		}
	}
	bool register_map_item_basic::equal(const register_map_item_basic& map_item) const
	{
		return size_ == map_item.size_;
	}

	std::size_t register_map_item_basic::size() const
	{
		return size_;
	}

	register_map_item_basic operator+(std::uint32_t size, const register_map_item_basic& map_item)
	{
		return size + map_item.size_;
	}
}

namespace lowi
{
	register_map_item_register::register_map_item_register(const std::shared_ptr<lowi::register_type>& register_type)
		: register_type_(register_type)
	{}
	register_map_item_register::register_map_item_register(const register_map_item_register& map_item)
		: register_type_(map_item.register_type_)
	{}
	register_map_item_register::register_map_item_register(register_map_item_register&& map_item) noexcept
		: register_type_(std::move(map_item.register_type_))
	{}

	bool register_map_item_register::operator==(const register_map_item_register& map_item) const
	{
		return equal(map_item);
	}
	bool register_map_item_register::operator!=(const register_map_item_register& map_item) const
	{
		return !equal(map_item);
	}
	register_map register_map_item_register::operator+(const register_map_item_register& map_item) const
	{
		register_map this_map = *this;
		register_map other_map = map_item;

		return this_map + other_map;
	}
	register_map register_map_item_register::operator+(const register_map_item_basic& map_item) const
	{
		register_map this_map = *this;
		register_map other_map = map_item;

		return this_map + other_map;
	}
	register_map register_map_item_register::operator+(std::uint32_t size) const
	{
		register_map this_map = *this;
		register_map other_map = size;

		return this_map + other_map;
	}

	bool register_map_item_register::equal(const register_map_item& map_item) const
	{
		if (dynamic_cast<const register_map_item_register*>(&map_item) == nullptr)
		{
			return false;
		}
		else
		{
			return equal(dynamic_cast<const register_map_item_register&>(map_item));
		}
	}
	bool register_map_item_register::equal(const register_map_item_register& map_item)
	{
		return register_type_->equal(*map_item.register_type_);
	}

	std::size_t register_map_item_register::size() const
	{
		return register_type_->size();
	}
	register_type::ptr register_map_item_register::register_type() const
	{
		return register_type_;
	}

	register_map operator+(std::uint32_t size, const register_map_item_register& map_item)
	{
		register_map this_map = size;
		register_map other_map = map_item;

		return this_map + other_map;
	}
}

namespace lowi
{
	register_map::register_map(std::uint32_t size)
	{
		map_.push_back(std::make_shared<register_map_item_basic>(size));
	}
	register_map::register_map(const register_map_item_basic& item)
	{
		map_.push_back(std::make_shared<register_map_item_basic>(item));
	}
	register_map::register_map(const register_map_item_register& item)
	{
		map_.push_back(std::make_shared<register_map_item_register>(item));
	}
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
	register_map_item::ptr register_map::operator[](std::uint32_t offset)
	{
		return at(offset);
	}
	register_map register_map::operator+(const register_map& map) const
	{
		register_map new_map = *this;
		new_map.map_.insert(new_map.map_.end(), map.map_.begin(), map.map_.end());

		return new_map;
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
	register_map_item::ptr register_map::at(std::uint32_t offset)
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

	std::uint32_t register_map::size() const
	{
		std::uint32_t sum = 0;

		for (const register_map_item::ptr& map : map_)
		{
			sum += map->size();
		}

		return sum;
	}

	const register_map register_map::empty;
}