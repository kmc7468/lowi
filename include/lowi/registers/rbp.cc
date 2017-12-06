#include <lowi/registers/rbp.hh>

#include <lowi/registers/ebp.hh>

namespace lowi
{
	namespace registers
	{
		rbp::rbp()
			: register_type("rbp", 4 + ebp::create())
		{}

		bool rbp::operator==(const rbp& rbp) const noexcept
		{
			return equal(rbp);
		}
		bool rbp::operator!=(const rbp& rbp) const noexcept
		{
			return !equal(rbp);
		}

		rbp& rbp::assign(const rbp&)
		{
			return *this;
		}
		rbp& rbp::assign(rbp&&) noexcept
		{
			return *this;
		}
		bool rbp::equal(const rbp&) const noexcept
		{
			return true;
		}

		register_type::ptr rbp::create()
		{
			return std::make_shared<rbp>();
		}
	}
}