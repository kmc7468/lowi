#include <lowi/registers/r12w.hh>

#include <lowi/registers/r12l.hh>

namespace lowi
{
	namespace registers
	{
		r12w::r12w()
			: register_type("r12w", 1 + r12l::create())
		{}

		bool r12w::operator==(const r12w& r12w) const noexcept
		{
			return equal(r12w);
		}
		bool r12w::operator!=(const r12w& r12w) const noexcept
		{
			return !equal(r12w);
		}

		r12w& r12w::assign(const r12w&)
		{
			return *this;
		}
		r12w& r12w::assign(r12w&&) noexcept
		{
			return *this;
		}
		bool r12w::equal(const r12w&) const noexcept
		{
			return true;
		}

		register_type::ptr r12w::create()
		{
			return std::make_shared<r12w>();
		}
	}
}