#include <lowi/registers/dh.hh>

namespace lowi
{
	namespace registers
	{
		dh::dh()
			: register_type("dh", 1)
		{}

		bool dh::operator==(const dh& dh) const noexcept
		{
			return equal(dh);
		}
		bool dh::operator!=(const dh& dh) const noexcept
		{
			return !equal(dh);
		}

		dh& dh::assign(const dh&)
		{
			return *this;
		}
		dh& dh::assign(dh&&) noexcept
		{
			return *this;
		}
		bool dh::equal(const dh&) const noexcept
		{
			return true;
		}

		register_type::ptr dh::create()
		{
			return std::make_shared<dh>();
		}
	}
}