#include <lowi/registers/ebx.hh>

#include <lowi/registers/bx.hh>

namespace lowi
{
	namespace registers
	{
		ebx::ebx()
			: register_type("ebx", 2 + bx::create())
		{}

		bool ebx::operator==(const ebx& ebx) const noexcept
		{
			return equal(ebx);
		}
		bool ebx::operator!=(const ebx& ebx) const noexcept
		{
			return !equal(ebx);
		}

		ebx& ebx::assign(const ebx&)
		{
			return *this;
		}
		ebx& ebx::assign(ebx&&) noexcept
		{
			return *this;
		}
		bool ebx::equal(const ebx&) const noexcept
		{
			return true;
		}

		register_type::ptr ebx::create()
		{
			return std::make_shared<ebx>();
		}
	}
}