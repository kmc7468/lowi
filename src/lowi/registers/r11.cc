#include <lowi/registers/r11.hh>

#include <lowi/registers/r11d.hh>

namespace lowi
{
	namespace registers
	{
		r11::r11()
			: register_type("r11", 4 + r11d::create())
		{}

		bool r11::operator==(const r11& r11) const noexcept
		{
			return equal(r11);
		}
		bool r11::operator!=(const r11& r11) const noexcept
		{
			return !equal(r11);
		}

		r11& r11::assign(const r11&)
		{
			return *this;
		}
		r11& r11::assign(r11&&) noexcept
		{
			return *this;
		}
		bool r11::equal(const r11&) const noexcept
		{
			return true;
		}

		register_type::ptr r11::create()
		{
			return std::make_shared<r11>();
		}
	}
}