#include <lowi/registers/r15l.hh>

namespace lowi
{
	namespace registers
	{
		r15l::r15l()
			: register_type("r15l", 1)
		{}

		bool r15l::operator==(const r15l& r15l) const noexcept
		{
			return equal(r15l);
		}
		bool r15l::operator!=(const r15l& r15l) const noexcept
		{
			return !equal(r15l);
		}

		r15l& r15l::assign(const r15l&)
		{
			return *this;
		}
		r15l& r15l::assign(r15l&&) noexcept
		{
			return *this;
		}
		bool r15l::equal(const r15l&) const noexcept
		{
			return true;
		}

		register_type::ptr r15l::create()
		{
			return std::make_shared<r15l>();
		}
	}
}