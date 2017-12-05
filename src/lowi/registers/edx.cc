#include <lowi/registers/edx.hh>

#include <lowi/registers/dx.hh>

namespace lowi
{
	namespace registers
	{
		edx::edx()
			: register_type("edx", 2 + dx::create())
		{}

		bool edx::operator==(const edx& edx) const noexcept
		{
			return equal(edx);
		}
		bool edx::operator!=(const edx& edx) const noexcept
		{
			return !equal(edx);
		}

		edx& edx::assign(const edx&)
		{
			return *this;
		}
		edx& edx::assign(edx&&) noexcept
		{
			return *this;
		}
		bool edx::equal(const edx&) const noexcept
		{
			return true;
		}

		register_type::ptr edx::create()
		{
			return std::make_shared<edx>();
		}
	}
}