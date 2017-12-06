#include <lowi/registers/r13d.hh>

#include <lowi/registers/r13w.hh>

namespace lowi
{
	namespace registers
	{
		r13d::r13d()
			: register_type("r13d", 2 + r13w::create())
		{}

		bool r13d::operator==(const r13d& r13d) const noexcept
		{
			return equal(r13d);
		}
		bool r13d::operator!=(const r13d& r13d) const noexcept
		{
			return !equal(r13d);
		}

		r13d& r13d::assign(const r13d&)
		{
			return *this;
		}
		r13d& r13d::assign(r13d&&) noexcept
		{
			return *this;
		}
		bool r13d::equal(const r13d&) const noexcept
		{
			return true;
		}

		register_type::ptr r13d::create()
		{
			return std::make_shared<r13d>();
		}
	}
}