#include <lowi/registers/r14l.hh>

namespace lowi
{
	namespace registers
	{
		r14l::r14l()
			: register_type("r14l", 1)
		{}

		bool r14l::operator==(const r14l& r14l) const noexcept
		{
			return equal(r14l);
		}
		bool r14l::operator!=(const r14l& r14l) const noexcept
		{
			return !equal(r14l);
		}

		r14l& r14l::assign(const r14l&)
		{
			return *this;
		}
		r14l& r14l::assign(r14l&&) noexcept
		{
			return *this;
		}
		bool r14l::equal(const r14l&) const noexcept
		{
			return true;
		}

		register_type::ptr r14l::create()
		{
			return std::make_shared<r14l>();
		}
	}
}