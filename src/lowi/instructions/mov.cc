#include <lowi/instructions/mov.hh>

namespace lowi
{
	namespace instructions
	{
		mov::mov()
			: instruction_type("mov", 2)
		{}

		bool mov::operator==(const mov& mov) const noexcept
		{
			return equal(mov);
		}
		bool mov::operator!=(const mov& mov) const noexcept
		{
			return !equal(mov);
		}

		mov& mov::assign(const mov&)
		{
			return *this;
		}
		mov& mov::assign(mov&&) noexcept
		{
			return *this;
		}
		bool mov::equal(const instruction_type& instruction_type) const
		{
			if (this == &instruction_type)
				return true;

			return name() == instruction_type.name() && number_of_operands() == instruction_type.number_of_operands();
		}
		bool mov::equal(const mov&) const noexcept
		{
			return true;
		}
	}
}