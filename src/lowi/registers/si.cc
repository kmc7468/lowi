#include <lowi/registers/si.hh>

namespace lowi
{
	namespace registers
	{
		si::si()
			: register_type("si", 2)
		{}

		bool si::operator==(const si& si) const noexcept
		{
			return equal(si);
		}
		bool si::operator!=(const si& si) const noexcept
		{
			return !equal(si);
		}

		si& si::assign(const si&)
		{
			return *this;
		}
		si& si::assign(si&&) noexcept
		{
			return *this;
		}
		bool si::equal(const si&) const noexcept
		{
			return true;
		}

		register_type::ptr si::create()
		{
			return std::make_shared<si>();
		}
	}
}