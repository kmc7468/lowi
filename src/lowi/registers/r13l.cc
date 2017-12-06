#include <lowi/registers/r13l.hh>

namespace lowi
{
	namespace registers
	{
		r13l::r13l()
			: register_type("r13l", 1)
		{}

		bool r13l::operator==(const r13l& r13l) const noexcept
		{
			return equal(r13l);
		}
		bool r13l::operator!=(const r13l& r13l) const noexcept
		{
			return !equal(r13l);
		}

		r13l& r13l::assign(const r13l&)
		{
			return *this;
		}
		r13l& r13l::assign(r13l&&) noexcept
		{
			return *this;
		}
		bool r13l::equal(const r13l&) const noexcept
		{
			return true;
		}

		register_type::ptr r13l::create()
		{
			return std::make_shared<r13l>();
		}
	}
}