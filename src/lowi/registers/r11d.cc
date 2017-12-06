#include <lowi/registers/r11d.hh>

#include <lowi/registers/r11w.hh>

namespace lowi
{
	namespace registers
	{
		r11d::r11d()
			: register_type("r11d", 2 + r11w::create())
		{}

		bool r11d::operator==(const r11d& r11d) const noexcept
		{
			return equal(r11d);
		}
		bool r11d::operator!=(const r11d& r11d) const noexcept
		{
			return !equal(r11d);
		}

		r11d& r11d::assign(const r11d&)
		{
			return *this;
		}
		r11d& r11d::assign(r11d&&) noexcept
		{
			return *this;
		}
		bool r11d::equal(const r11d&) const noexcept
		{
			return true;
		}

		register_type::ptr r11d::create()
		{
			return std::make_shared<r11d>();
		}
	}
}