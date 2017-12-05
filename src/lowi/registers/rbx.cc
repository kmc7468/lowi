#include <lowi/registers/rbx.hh>

#include <lowi/registers/ebx.hh>

namespace lowi
{
	namespace registers
	{
		rbx::rbx()
			: register_type("rbx", 4 + ebx::create())
		{}

		bool rbx::operator==(const rbx& rbx) const noexcept
		{
			return equal(rbx);
		}
		bool rbx::operator!=(const rbx& rbx) const noexcept
		{
			return !equal(rbx);
		}

		rbx& rbx::assign(const rbx&)
		{
			return *this;
		}
		rbx& rbx::assign(rbx&&) noexcept
		{
			return *this;
		}
		bool rbx::equal(const rbx&) const noexcept
		{
			return true;
		}

		register_type::ptr rbx::create()
		{
			return std::make_shared<rbx>();
		}
	}
}