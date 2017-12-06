#include <lowi/registers/r9d.hh>

#include <lowi/registers/r9w.hh>

namespace lowi
{
	namespace registers
	{
		r9d::r9d()
			: register_type("r9d", 2 + r9w::create())
		{}

		bool r9d::operator==(const r9d& r9d) const noexcept
		{
			return equal(r9d);
		}
		bool r9d::operator!=(const r9d& r9d) const noexcept
		{
			return !equal(r9d);
		}

		r9d& r9d::assign(const r9d&)
		{
			return *this;
		}
		r9d& r9d::assign(r9d&&) noexcept
		{
			return *this;
		}
		bool r9d::equal(const r9d&) const noexcept
		{
			return true;
		}

		register_type::ptr r9d::create()
		{
			return std::make_shared<r9d>();
		}
	}
}