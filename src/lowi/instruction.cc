#include <lowi/instruction.hh>

#include <utility>

namespace lowi
{
	instruction::instruction(const token& token, const instruction_type::ptr& type)
		: token_(token), type_(type)
	{}
	instruction::instruction(const instruction& instruction)
		: token_(instruction.token_), type_(instruction.type_)
	{}
	instruction::instruction(instruction&& instruction) noexcept
		: token_(std::move(instruction.token_)), type_(std::move(instruction.type_))
	{}

	instruction& instruction::operator=(const instruction& instruction)
	{
		return assign(instruction);
	}
	instruction& instruction::operator=(instruction&& instruction) noexcept
	{
		return assign(std::move(instruction));
	}
	bool instruction::operator==(const instruction& instruction) const
	{
		return equal(instruction);
	}
	bool instruction::operator!=(const instruction& instruction) const
	{
		return !equal(instruction);
	}

	instruction& instruction::assign(const instruction& instruction)
	{
		token_ = instruction.token_;
		type_ = instruction.type_;
		return *this;
	}
	instruction& instruction::assign(instruction&& instruction) noexcept
	{
		token_ = std::move(instruction.token_);
		type_ = std::move(instruction.type_);
		return *this;
	}
	bool instruction::equal(const instruction& instruction) const
	{
		return token_ == instruction.token_ && type_ == instruction.type_;
	}
}