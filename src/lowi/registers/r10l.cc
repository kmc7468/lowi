#include <lowi/registers/r10l.hh>

namespace lowi
{
	namespace registers
	{
		r10l::r10l()
			: register_type("r10l", 1)
		{}

		bool r10l::operator==(const r10l& r10l) const noexcept
		{
			return equal(r10l);
		}
		bool r10l::operator!=(const r10l& r10l) const noexcept
		{
			return !equal(r10l);
		}

		r10l& r10l::assign(const r10l&)
		{
			return *this;
		}
		r10l& r10l::assign(r10l&&) noexcept
		{
			return *this;
		}
		bool r10l::equal(const r10l&) const noexcept
		{
			return true;
		}

		register_type::ptr r10l::create()
		{
			return std::make_shared<r10l>();
		}
	}
}