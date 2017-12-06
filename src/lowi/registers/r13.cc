#include <lowi/registers/r13.hh>

#include <lowi/registers/r13d.hh>

namespace lowi
{
	namespace registers
	{
		r13::r13()
			: register_type("r13", 4 + r13d::create())
		{}

		bool r13::operator==(const r13& r13) const noexcept
		{
			return equal(r13);
		}
		bool r13::operator!=(const r13& r13) const noexcept
		{
			return !equal(r13);
		}

		r13& r13::assign(const r13&)
		{
			return *this;
		}
		r13& r13::assign(r13&&) noexcept
		{
			return *this;
		}
		bool r13::equal(const r13&) const noexcept
		{
			return true;
		}

		register_type::ptr r13::create()
		{
			return std::make_shared<r13>();
		}
	}
}