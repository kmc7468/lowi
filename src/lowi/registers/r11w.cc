#include <lowi/registers/r11w.hh>

#include <lowi/registers/r11l.hh>

namespace lowi
{
	namespace registers
	{
		r11w::r11w()
			: register_type("r11w", 1 + r11l::create())
		{}

		bool r11w::operator==(const r11w& r11w) const noexcept
		{
			return equal(r11w);
		}
		bool r11w::operator!=(const r11w& r11w) const noexcept
		{
			return !equal(r11w);
		}

		r11w& r11w::assign(const r11w&)
		{
			return *this;
		}
		r11w& r11w::assign(r11w&&) noexcept
		{
			return *this;
		}
		bool r11w::equal(const r11w&) const noexcept
		{
			return true;
		}

		register_type::ptr r11w::create()
		{
			return std::make_shared<r11w>();
		}
	}
}