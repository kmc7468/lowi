#include <lowi/registers/rdx.hh>

#include <lowi/registers/edx.hh>

namespace lowi
{
	namespace registers
	{
		rdx::rdx()
			: register_type("rdx", 4 + edx::create())
		{}

		bool rdx::operator==(const rdx& rdx) const noexcept
		{
			return equal(rdx);
		}
		bool rdx::operator!=(const rdx& rdx) const noexcept
		{
			return !equal(rdx);
		}

		rdx& rdx::assign(const rdx&)
		{
			return *this;
		}
		rdx& rdx::assign(rdx&&) noexcept
		{
			return *this;
		}
		bool rdx::equal(const rdx&) const noexcept
		{
			return true;
		}

		register_type::ptr rdx::create()
		{
			return std::make_shared<rdx>();
		}
	}
}