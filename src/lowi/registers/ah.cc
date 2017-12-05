#include <lowi/registers/ah.hh>

namespace lowi
{
	namespace registers
	{
		ah::ah()
			: register_type("ah", 1)
		{}

		bool ah::operator==(const ah& ah) const noexcept
		{
			return equal (ah);
		}
		bool ah::operator!=(const ah& ah) const noexcept
		{
			return !equal(ah);
		}

		ah& ah::assign(const ah&)
		{
			return *this;
		}
		ah& ah::assign(ah&&) noexcept
		{
			return *this;
		}
		bool ah::equal(const ah&) const noexcept
		{
			return true;
		}

		register_type::ptr ah::create()
		{
			return std::make_shared<ah>();
		}
	}
}