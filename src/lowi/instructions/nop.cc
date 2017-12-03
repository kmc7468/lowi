#include <lowi/instructions/nop.hh>

namespace lowi
{
	namespace instructions
	{
		nop::nop()
			: instruction_type("nop", 0)
		{}

		bool nop::operator==(const nop& nop) const noexcept
		{
			return equal(nop);
		}
		bool nop::operator!=(const nop& nop) const noexcept
		{
			return !equal(nop);
		}

		nop& nop::assign(const nop&)
		{
			return *this;
		}
		nop& nop::assign(nop&&) noexcept
		{
			return *this;
		}
		bool nop::equal(const instruction_type& instruction_type) const
		{
			if (this == &instruction_type)
				return true;
			
			return name() == instruction_type.name() && number_of_operands() == instruction_type.number_of_operands();
		}
		bool nop::equal(const nop&) const noexcept
		{
			return true;
		}
	}
}