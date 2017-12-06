#include <lowi/registers/r15.hh>

#include <lowi/registers/r15d.hh>

namespace lowi
{
	namespace registers
	{
		r15::r15()
			: register_type("r15", 4 + r15d::create())
		{}

		bool r15::operator==(const r15& r15) const noexcept
		{
			return equal(r15);
		}
		bool r15::operator!=(const r15& r15) const noexcept
		{
			return !equal(r15);
		}

		r15& r15::assign(const r15&)
		{
			return *this;
		}
		r15& r15::assign(r15&&) noexcept
		{
			return *this;
		}
		bool r15::equal(const r15&) const noexcept
		{
			return true;
		}

		register_type::ptr r15::create()
		{
			return std::make_shared<r15>();
		}
	}
}