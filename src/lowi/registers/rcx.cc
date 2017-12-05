#include <lowi/registers/rcx.hh>

#include <lowi/registers/ecx.hh>

namespace lowi
{
	namespace registers
	{
		rcx::rcx()
			: register_type("rcx", 4 + ecx::create())
		{}

		bool rcx::operator==(const rcx& rcx) const noexcept
		{
			return equal(rcx);
		}
		bool rcx::operator!=(const rcx& rcx) const noexcept
		{
			return !equal(rcx);
		}

		rcx& rcx::assign(const rcx&)
		{
			return *this;
		}
		rcx& rcx::assign(rcx&&) noexcept
		{
			return *this;
		}
		bool rcx::equal(const rcx&) const noexcept
		{
			return true;
		}

		register_type::ptr rcx::create()
		{
			return std::make_shared<rcx>();
		}
	}
}