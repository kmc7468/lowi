#include <lowi/register_type.hh>

namespace lowi
{
	register_type::register_type(const std::string& name, std::uint32_t size)
		: name_(name), map_(size)
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

	std::string register_type::name() const
	{
		return name_;
	}
	std::uint32_t register_type::size() const noexcept
	{
		return map_.size();
	}
}