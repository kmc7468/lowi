#include <lowi/registers/r8l.hh>

namespace lowi
{
	namespace registers
	{
		r8l::r8l()
			: register_type("r8l", 1)
		{}

		bool r8l::operator==(const r8l& r8l) const noexcept
		{
			return equal(r8l);
		}
		bool r8l::operator!=(const r8l& r8l) const noexcept
		{
			return !equal(r8l);
		}

		r8l& r8l::assign(const r8l&)
		{
			return *this;
		}
		r8l& r8l::assign(r8l&&) noexcept
		{
			return *this;
		}
		bool r8l::equal(const r8l&) const noexcept
		{
			return true;
		}

		register_type::ptr r8l::create()
		{
			return std::make_shared<r8l>();
		}
	}
}