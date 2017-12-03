#include <lowi/instruction_type.hh>

#include <lowi/instructions/mov.hh>
#include <lowi/instructions/nop.hh>

#include <utility>

namespace lowi
{
	instruction_type::instruction_type(const std::string& name, std::uint64_t number_of_operands)
		: name_(name), number_of_operands_(number_of_operands)
	{}

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

	std::string instruction_type::name() const
	{
		return name_;
	}
	std::uint64_t instruction_type::number_of_operands() const noexcept
	{
		return number_of_operands_;
	}

	const instruction_type::ptr instruction_type::nop = std::make_shared<instructions::nop>();
	const instruction_type::ptr instruction_type::mov = std::make_shared<instructions::mov>();
}

namespace lowi
{
	instruction_type_set::instruction_type_set(const std::string& name)
		: name_(name)
	{}
	instruction_type_set::instruction_type_set(const std::string& name, bool lock)
		: name_(name), locked_(lock)
	{}
	instruction_type_set::instruction_type_set(const std::string& name, const std::vector<instruction_type::ptr>& instruction_types)
		: name_(name), instruction_types_(instruction_types)
	{}
	instruction_type_set::instruction_type_set(const std::string& name, const std::vector<instruction_type::ptr>& instruction_types,
		bool lock)
		: name_(name), instruction_types_(instruction_types), locked_(lock)
	{}
	instruction_type_set::instruction_type_set(const instruction_type_set& instruction_type)
		: name_(instruction_type.name_), instruction_types_(instruction_type.instruction_types_),
		locked_(instruction_type.locked_)
	{}
	instruction_type_set::instruction_type_set(instruction_type_set&& instruction_type) noexcept
		: name_(std::move(instruction_type.name_)), instruction_types_(std::move(instruction_type.instruction_types_)),
		locked_(instruction_type.locked_)
	{
		instruction_type.locked_ = false;
	}

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
		locked_ = instruction_type.locked_;
		return *this;
	}
	instruction_type_set& instruction_type_set::assign(instruction_type_set&& instruction_type) noexcept
	{
		name_ = std::move(instruction_type.name_);
		instruction_types_ = std::move(instruction_type.instruction_types_);
		locked_ = instruction_type.locked_;
		instruction_type.locked_ = false;
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
		if (locked_ != instruction_type.locked_)
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
		if (!locked_)
		{
			return name_ = new_name;
		}
		else
		{
			return name_;
		}
	}
	bool instruction_type_set::locked() const noexcept
	{
		return locked_;
	}
	bool instruction_type_set::locked(bool lock) noexcept
	{
		if (!locked_)
		{
			return locked_ = lock;
		}
		else
		{
			return locked_;
		}
	}

	const instruction_type_set::ptr instruction_type_set::default =
		std::make_shared<instruction_type_set, std::string, std::vector<instruction_type::ptr>>("default", 
	{
		instruction_type::nop,
		instruction_type::mov,
	}, true);
}