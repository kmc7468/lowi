#include <lowi/registers/ch.hh>

namespace lowi
{
	namespace registers
	{
		ch::ch()
			: register_type("ch", 1)
		{}

		bool ch::operator==(const ch& ch) const noexcept
		{
			return equal(ch);
		}
		bool ch::operator!=(const ch& ch) const noexcept
		{
			return !equal(ch);
		}

		ch& ch::assign(const ch&)
		{
			return *this;
		}
		ch& ch::assign(ch&&) noexcept
		{
			return *this;
		}
		bool ch::equal(const ch&) const noexcept
		{
			return true;
		}

		register_type::ptr ch::create()
		{
			return std::make_shared<ch>();
		}
	}
}