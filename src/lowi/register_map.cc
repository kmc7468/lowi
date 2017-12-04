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