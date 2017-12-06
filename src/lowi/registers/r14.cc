#include <lowi/registers/r14.hh>

#include <lowi/registers/r14d.hh>

namespace lowi
{
	namespace registers
	{
		r14::r14()
			: register_type("r14", 4 + r14d::create())
		{}

		bool r14::operator==(const r14& r14) const noexcept
		{
			return equal(r14);
		}
		bool r14::operator!=(const r14& r14) const noexcept
		{
			return !equal(r14);
		}

		r14& r14::assign(const r14&)
		{
			return *this;
		}
		r14& r14::assign(r14&&) noexcept
		{
			return *this;
		}
		bool r14::equal(const r14&) const noexcept
		{
			return true;
		}

		register_type::ptr r14::create()
		{
			return std::make_shared<r14>();
		}
	}
}