#include <lowi/register_type.hh>

namespace lowi
{
	register_additional_data::register_additional_data(register_category category)
		: category_(category)
	{}

	bool register_additional_data::operator==(const register_additional_data& data) const
	{
		return equal(data);
	}
	bool register_additional_data::operator==(const ptr& data) const
	{
		return equal(data);
	}
	bool register_additional_data::operator!=(const register_additional_data& data) const
	{
		return !equal(data);
	}
	bool register_additional_data::operator!=(const ptr& data) const
	{
		return !equal(data);
	}

	bool register_additional_data::equal(const ptr& data) const
	{
		return equal(*data);
	}

	register_category register_additional_data::category() const noexcept
	{
		return category_;
	}
}

namespace lowi
{
	register_type::register_type(const std::string& name, register_category category, std::uint32_t size)
		: name_(name), map_(size), category_(category)
	{}
	register_type::register_type(const std::string& name, register_category category, const register_map& map)
		: name_(name), map_(map), category_(category)
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
	register_category register_type::category() const noexcept
	{
		return category_;
	}
}