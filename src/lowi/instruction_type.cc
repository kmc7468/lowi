#include <lowi/instruction_type.hh>

#include <utility>

namespace lowi
{
	bool instruction_type::operator==(const instruction_type& instruction_type) const
	{
		return equal(instruction_type);
	}
	bool instruction_type::operator==(const ptr& instruction_type) const
	{
		return equal(instruction_type);
	}
	bool instruction_type::operator!=(const instruction_type& instruction_type) const
	{
		return !equal(instruction_type);
	}
	bool instruction_type::operator!=(const ptr& instruction_type) const
	{
		return !equal(instruction_type);
	}

	bool instruction_type::equal(const ptr& instruction_type) const
	{
		return equal(*instruction_type);
	}
}

namespace lowi
{
	instruction_type_set::instruction_type_set(const instruction_type_set& instruction_type)
		: name_(instruction_type.name_), instruction_types_(instruction_type.instruction_types_)
	{}
	instruction_type_set::instruction_type_set(instruction_type_set&& instruction_type) noexcept
		: name_(std::move(instruction_type.name_)), instruction_types_(std::move(instruction_type.instruction_types_))
	{}

	instruction_type_set& instruction_type_set::operator=(const instruction_type_set& instruction_type)
	{
		return assign(instruction_type);
	}
	instruction_type_set& instruction_type_set::operator=(instruction_type_set&& instruction_type) noexcept
	{
		return assign(std::move(instruction_type));
	}
	bool instruction_type_set::operator==(const instruction_type_set& instruction_type) const
	{
		return equal(instruction_type);
	}
	bool instruction_type_set::operator==(const ptr& instruction_type) const
	{
		return equal(instruction_type);
	}
	bool instruction_type_set::operator!=(const instruction_type_set& instruction_type) const
	{
		return !equal(instruction_type);
	}
	bool instruction_type_set::operator!=(const ptr& instruction_type) const
	{
		return !equal(instruction_type);
	}

	instruction_type_set& instruction_type_set::assign(const instruction_type_set& instruction_type)
	{
		name_ = instruction_type.name_;
		instruction_types_ = instruction_type.instruction_types_;
		return *this;
	}
	instruction_type_set& instruction_type_set::assign(instruction_type_set&& instruction_type) noexcept
	{
		name_ = std::move(instruction_type.name_);
		instruction_types_ = std::move(instruction_type.instruction_types_);
		return *this;
	}
	bool instruction_type_set::equal(const instruction_type_set& instruction_type) const
	{
		if (this == &instruction_type)
			return true;
		if (name_ != instruction_type.name_)
			return false;
		if (instruction_types_.size() != instruction_type.instruction_types_.size())
			return false;

		for (std::size_t i = 0; i < instruction_types_.size(); ++i)
		{
			if (!instruction_types_[i]->equal(instruction_type.instruction_types_[i]))
			{
				return false;
			}
		}

		return true;
	}
	bool instruction_type_set::equal(const ptr& instruction_type) const
	{
		return equal(*instruction_type);
	}

	std::string instruction_type_set::name() const
	{
		return name_;
	}
	std::string instruction_type_set::name(const std::string& new_name)
	{
		return name_ = new_name;
	}
}