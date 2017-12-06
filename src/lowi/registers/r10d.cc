#include <lowi/registers/r10d.hh>

#include <lowi/registers/r10w.hh>

namespace lowi
{
	namespace registers
	{
		r10d::r10d()
			: register_type("r10d", 2 + r10w::create())
		{}

		bool r10d::operator==(const r10d& r10d) const noexcept
		{
			return equal(r10d);
		}
		bool r10d::operator!=(const r10d& r10d) const noexcept
		{
			return !equal(r10d);
		}

		r10d& r10d::assign(const r10d&)
		{
			return *this;
		}
		r10d& r10d::assign(r10d&&) noexcept
		{
			return *this;
		}
		bool r10d::equal(const r10d&) const noexcept
		{
			return true;
		}

		register_type::ptr r10d::create()
		{
			return std::make_shared<r10d>();
		}
	}
}