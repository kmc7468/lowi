#include <lowi/registers/r11l.hh>

namespace lowi
{
	namespace registers
	{
		r11l::r11l()
			: register_type("r11l", 1)
		{}

		bool r11l::operator==(const r11l& r11l) const noexcept
		{
			return equal(r11l);
		}
		bool r11l::operator!=(const r11l& r11l) const noexcept
		{
			return !equal(r11l);
		}

		r11l& r11l::assign(const r11l&)
		{
			return *this;
		}
		r11l& r11l::assign(r11l&&) noexcept
		{
			return *this;
		}
		bool r11l::equal(const r11l&) const noexcept
		{
			return true;
		}

		register_type::ptr r11l::create()
		{
			return std::make_shared<r11l>();
		}
	}
}