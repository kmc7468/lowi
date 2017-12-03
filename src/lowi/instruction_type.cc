#include <lowi/instruction_type.hh>

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