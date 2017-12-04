#include <lowi/register_type.hh>

namespace lowi
{
	register_type::register_type(const std::string& name, std::uint32_t size)
		: name_(name), map_(size)
	{}
	register_type::register_type(const std::string& name, const register_map& map)
		: name_(name), map_(map)
	{}

	bool register_type::operator==(const register_type& register_type) const
	{
		return equal(register_type);
	}
	bool register_type::operator==(const ptr& register_type) const
	{
		return equal(register_type);
	}
	bool register_type::operator!=(const register_type& register_type) const
	{
		return !equal(register_type);
	}
	bool register_type::operator!=(const ptr& register_type) const
	{
		return !equal(register_type);
	}

	bool register_type::equal(const register_type& register_type) const
	{
		return name_ == register_type.name() && map_ == register_type.map_;
	}
	bool register_type::equal(const ptr& register_type) const
	{
		return equal(*register_type);
	}

	std::uint32_t register_type::size() const noexcept
	{
		return map_.size();
	}

	std::string register_type::name() const
	{
		return name_;
	}
	register_map register_type::map() const
	{
		return map_;
	}
}