#include <lowi/registers/r12d.hh>

#include <lowi/registers/r12w.hh>

namespace lowi
{
	namespace registers
	{
		r12d::r12d()
			: register_type("r12d", 2 + r12w::create())
		{}

		bool r12d::operator==(const r12d& r12d) const noexcept
		{
			return equal(r12d);
		}
		bool r12d::operator!=(const r12d& r12d) const noexcept
		{
			return !equal(r12d);
		}

		r12d& r12d::assign(const r12d&)
		{
			return *this;
		}
		r12d& r12d::assign(r12d&&) noexcept
		{
			return *this;
		}
		bool r12d::equal(const r12d&) const noexcept
		{
			return true;
		}

		register_type::ptr r12d::create()
		{
			return std::make_shared<r12d>();
		}
	}
}