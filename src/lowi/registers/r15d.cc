#include <lowi/registers/r15d.hh>

#include <lowi/registers/r15w.hh>

namespace lowi
{
	namespace registers
	{
		r15d::r15d()
			: register_type("r15d", 2 + r15w::create())
		{}

		bool r15d::operator==(const r15d& r15d) const noexcept
		{
			return equal(r15d);
		}
		bool r15d::operator!=(const r15d& r15d) const noexcept
		{
			return !equal(r15d);
		}

		r15d& r15d::assign(const r15d&)
		{
			return *this;
		}
		r15d& r15d::assign(r15d&&) noexcept
		{
			return *this;
		}
		bool r15d::equal(const r15d&) const noexcept
		{
			return true;
		}

		register_type::ptr r15d::create()
		{
			return std::make_shared<r15d>();
		}
	}
}