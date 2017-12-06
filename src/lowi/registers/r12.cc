#include <lowi/registers/r12.hh>

#include <lowi/registers/r12d.hh>

namespace lowi
{
	namespace registers
	{
		r12::r12()
			: register_type("r12", 4 + r12d::create())
		{}

		bool r12::operator==(const r12& r12) const noexcept
		{
			return equal(r12);
		}
		bool r12::operator!=(const r12& r12) const noexcept
		{
			return !equal(r12);
		}

		r12& r12::assign(const r12&)
		{
			return *this;
		}
		r12& r12::assign(r12&&) noexcept
		{
			return *this;
		}
		bool r12::equal(const r12&) const noexcept
		{
			return true;
		}

		register_type::ptr r12::create()
		{
			return std::make_shared<r12>();
		}
	}
}