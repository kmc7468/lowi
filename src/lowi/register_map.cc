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

	const register_map register_map::empty;
}