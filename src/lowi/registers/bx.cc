#include <lowi/registers/bx.hh>

#include <lowi/registers/bh.hh>
#include <lowi/registers/bl.hh>

namespace lowi
{
	namespace registers
	{
		bx::bx()
			: register_type("bx", bh::create() + bl::create())
		{}

		bool bx::operator==(const bx& bx) const noexcept
		{
			return equal(bx);
		}
		bool bx::operator!=(const bx& bx) const noexcept
		{
			return !equal(bx);
		}

		bx& bx::assign(const bx&)
		{
			return *this;
		}
		bx& bx::assign(bx&&) noexcept
		{
			return *this;
		}
		bool bx::equal(const bx&) const noexcept
		{
			return true;
		}

		register_type::ptr bx::create()
		{
			return std::make_shared<bx>();
		}
	}
}