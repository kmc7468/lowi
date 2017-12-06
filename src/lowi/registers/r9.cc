#include <lowi/registers/r9.hh>

#include <lowi/registers/r9d.hh>

namespace lowi
{
	namespace registers
	{
		r9::r9()
			: register_type("r9", 4 + r9d::create())
		{}

		bool r9::operator==(const r9& r9) const noexcept
		{
			return equal(r9);
		}
		bool r9::operator!=(const r9& r9) const noexcept
		{
			return !equal(r9);
		}

		r9& r9::assign(const r9&)
		{
			return *this;
		}
		r9& r9::assign(r9&&) noexcept
		{
			return *this;
		}
		bool r9::equal(const r9&) const noexcept
		{
			return true;
		}

		register_type::ptr r9::create()
		{
			return std::make_shared<r9>();
		}
	}
}