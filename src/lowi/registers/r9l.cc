#include <lowi/registers/r9l.hh>

namespace lowi
{
	namespace registers
	{
		r9l::r9l()
			: register_type("r9l", 1)
		{}

		bool r9l::operator==(const r9l& r9l) const noexcept
		{
			return equal(r9l);
		}
		bool r9l::operator!=(const r9l& r9l) const noexcept
		{
			return !equal(r9l);
		}

		r9l& r9l::assign(const r9l&)
		{
			return *this;
		}
		r9l& r9l::assign(r9l&&) noexcept
		{
			return *this;
		}
		bool r9l::equal(const r9l&) const noexcept
		{
			return true;
		}

		register_type::ptr r9l::create()
		{
			return std::make_shared<r9l>();
		}
	}
}