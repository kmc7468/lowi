#include <lowi/register_type.hh>

#include <utility>

namespace lowi
{
	register_additional_data::register_additional_data(register_category category) noexcept
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
	segment_register_additional_data::segment_register_additional_data(bool can_read_and_write_basically) noexcept
		: register_additional_data(register_category::segment_register), can_read_and_write_basically_(can_read_and_write_basically)
	{}
	segment_register_additional_data::segment_register_additional_data(const segment_register_additional_data& data) noexcept
		: register_additional_data(register_category::segment_register), can_read_and_write_basically_(data.can_read_and_write_basically_)
	{}
	segment_register_additional_data::segment_register_additional_data(segment_register_additional_data&& data) noexcept
		: register_additional_data(register_category::segment_register), can_read_and_write_basically_(std::move(data.can_read_and_write_basically_))
	{}

	segment_register_additional_data& segment_register_additional_data::operator=(const segment_register_additional_data& data) noexcept
	{
		return assign(data);
	}
	segment_register_additional_data& segment_register_additional_data::operator=(segment_register_additional_data&& data) noexcept
	{
		return assign(std::move(data));
	}
	bool segment_register_additional_data::operator==(const segment_register_additional_data& data) const noexcept
	{
		return equal(data);
	}
	bool segment_register_additional_data::operator!=(const segment_register_additional_data& data) const noexcept
	{
		return !equal(data);
	}

	segment_register_additional_data& segment_register_additional_data::assign(const segment_register_additional_data& data) noexcept
	{
		can_read_and_write_basically_ = data.can_read_and_write_basically_;
		return *this;
	}
	segment_register_additional_data& segment_register_additional_data::assign(segment_register_additional_data&& data) noexcept
	{
		can_read_and_write_basically_ = std::move(data.can_read_and_write_basically_);
		return *this;
	}
	bool segment_register_additional_data::equal(const register_additional_data& data) const
	{
		if (dynamic_cast<const segment_register_additional_data*>(&data) != nullptr)
		{
			const segment_register_additional_data& data_converted =
				dynamic_cast<const segment_register_additional_data&>(data);

			return equal(data_converted);
		}

		return false;
	}
	bool segment_register_additional_data::equal(const segment_register_additional_data& data) const noexcept
	{
		return can_read_and_write_basically_ == data.can_read_and_write_basically_;
	}

	bool segment_register_additional_data::can_read_and_write_basically() const noexcept
	{
		return can_read_and_write_basically_;
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