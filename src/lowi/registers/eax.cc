#include <lowi/registers/eax.hh>

#include <lowi/registers/ax.hh>

namespace lowi
{
	namespace registers
	{
		eax::eax()
			: register_type("eax", 2 + ax::create())
		{}

		bool eax::operator==(const eax& eax) const noexcept
		{
			return equal(eax);
		}
		bool eax::operator!=(const eax& eax) const noexcept
		{
			return !equal(eax);
		}

		eax& eax::assign(const eax&)
		{
			return *this;
		}
		eax& eax::assign(eax&&) noexcept
		{
			return *this;
		}
		bool eax::equal(const eax&) const noexcept
		{
			return true;
		}

		register_type::ptr eax::create()
		{
			return std::make_shared<eax>();
		}
	}
}