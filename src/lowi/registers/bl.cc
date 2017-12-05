#include <lowi/registers/bl.hh>

namespace lowi
{
	namespace registers
	{
		bl::bl()
			: register_type("bl", 1)
		{}

		bool bl::operator==(const bl& bl) const noexcept
		{
			return equal(bl);
		}
		bool bl::operator!=(const bl& bl) const noexcept
		{
			return !equal(bl);
		}

		bl& bl::assign(const bl&)
		{
			return *this;
		}
		bl& bl::assign(bl&&) noexcept
		{
			return *this;
		}
		bool bl::equal(const bl&) const noexcept
		{
			return true;
		}

		register_type::ptr bl::create()
		{
			return std::make_shared<bl>();
		}
	}
}