#include <lowi/registers/r14d.hh>

#include <lowi/registers/r14w.hh>

namespace lowi
{
	namespace registers
	{
		r14d::r14d()
			: register_type("r14d", 2 + r14w::create())
		{}

		bool r14d::operator==(const r14d& r14d) const noexcept
		{
			return equal(r14d);
		}
		bool r14d::operator!=(const r14d& r14d) const noexcept
		{
			return !equal(r14d);
		}

		r14d& r14d::assign(const r14d&)
		{
			return *this;
		}
		r14d& r14d::assign(r14d&&) noexcept
		{
			return *this;
		}
		bool r14d::equal(const r14d&) const noexcept
		{
			return true;
		}

		register_type::ptr r14d::create()
		{
			return std::make_shared<r14d>();
		}
	}
}