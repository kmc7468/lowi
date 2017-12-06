#include <lowi/registers/r12l.hh>

namespace lowi
{
	namespace registers
	{
		r12l::r12l()
			: register_type("r12l", 1)
		{}

		bool r12l::operator==(const r12l& r12l) const noexcept
		{
			return equal(r12l);
		}
		bool r12l::operator!=(const r12l& r12l) const noexcept
		{
			return !equal(r12l);
		}

		r12l& r12l::assign(const r12l&)
		{
			return *this;
		}
		r12l& r12l::assign(r12l&&) noexcept
		{
			return *this;
		}
		bool r12l::equal(const r12l&) const noexcept
		{
			return true;
		}

		register_type::ptr r12l::create()
		{
			return std::make_shared<r12l>();
		}
	}
}