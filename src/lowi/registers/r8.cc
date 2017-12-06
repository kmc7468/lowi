#include <lowi/registers/r8.hh>

#include <lowi/registers/r8d.hh>

namespace lowi
{
	namespace registers
	{
		r8::r8()
			: register_type("r8", 4 + r8d::create())
		{}

		bool r8::operator==(const r8& r8) const noexcept
		{
			return equal(r8);
		}
		bool r8::operator!=(const r8& r8) const noexcept
		{
			return !equal(r8);
		}

		r8& r8::assign(const r8&)
		{
			return *this;
		}
		r8& r8::assign(r8&&) noexcept
		{
			return *this;
		}
		bool r8::equal(const r8&) const noexcept
		{
			return true;
		}

		register_type::ptr r8::create()
		{
			return std::make_shared<r8>();
		}
	}
}