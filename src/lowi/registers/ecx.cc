#include <lowi/registers/ecx.hh>

#include <lowi/registers/cx.hh>

namespace lowi
{
	namespace registers
	{
		ecx::ecx()
			: register_type("ecx", 2 + cx::create())
		{}

		bool ecx::operator==(const ecx& ecx) const noexcept
		{
			return equal(ecx);
		}
		bool ecx::operator!=(const ecx& ecx) const noexcept
		{
			return !equal(ecx);
		}

		ecx& ecx::assign(const ecx&)
		{
			return *this;
		}
		ecx& ecx::assign(ecx&&) noexcept
		{
			return *this;
		}
		bool ecx::equal(const ecx&) const noexcept
		{
			return true;
		}

		register_type::ptr ecx::create()
		{
			return std::make_shared<ecx>();
		}
	}
}