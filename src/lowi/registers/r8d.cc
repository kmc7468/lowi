#include <lowi/registers/r8d.hh>

#include <lowi/registers/r8w.hh>

namespace lowi
{
	namespace registers
	{
		r8d::r8d()
			: register_type("r8d", 2 + r8w::create())
		{}

		bool r8d::operator==(const r8d& r8d) const noexcept
		{
			return equal(r8d);
		}
		bool r8d::operator!=(const r8d& r8d) const noexcept
		{
			return !equal(r8d);
		}

		r8d& r8d::assign(const r8d&)
		{
			return *this;
		}
		r8d& r8d::assign(r8d&&) noexcept
		{
			return *this;
		}
		bool r8d::equal(const r8d&) const noexcept
		{
			return true;
		}

		register_type::ptr r8d::create()
		{
			return std::make_shared<r8d>();
		}
	}
}