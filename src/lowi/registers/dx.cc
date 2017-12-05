#include <lowi/registers/dx.hh>

#include <lowi/registers/dh.hh>
#include <lowi/registers/dl.hh>

namespace lowi
{
	namespace registers
	{
		dx::dx()
			: register_type("dx", dh::create() + dl::create())
		{}

		bool dx::operator==(const dx& dx) const noexcept
		{
			return equal(dx);
		}
		bool dx::operator!=(const dx& dx) const noexcept
		{
			return !equal(dx);
		}

		dx& dx::assign(const dx&)
		{
			return *this;
		}
		dx& dx::assign(dx&&) noexcept
		{
			return *this;
		}
		bool dx::equal(const dx&) const noexcept
		{
			return true;
		}

		register_type::ptr dx::create()
		{
			return std::make_shared<dx>();
		}
	}
}