#include <lowi/registers/sp.hh>

namespace lowi
{
	namespace registers
	{
		sp::sp()
			: register_type("sp", 2)
		{}

		bool sp::operator==(const sp& sp) const noexcept
		{
			return equal(sp);
		}
		bool sp::operator!=(const sp& sp) const noexcept
		{
			return !equal(sp);
		}

		sp& sp::assign(const sp&)
		{
			return *this;
		}
		sp& sp::assign(sp&&) noexcept
		{
			return *this;
		}
		bool sp::equal(const sp&) const noexcept
		{
			return true;
		}

		register_type::ptr sp::create()
		{
			return std::make_shared<sp>();
		}
	}
}