#include <lowi/registers/r9w.hh>

#include <lowi/registers/r9l.hh>

namespace lowi
{
	namespace registers
	{
		r9w::r9w()
			: register_type("r9w", 1 + r9l::create())
		{}

		bool r9w::operator==(const r9w& r9w) const noexcept
		{
			return equal(r9w);
		}
		bool r9w::operator!=(const r9w& r9w) const noexcept
		{
			return !equal(r9w);
		}

		r9w& r9w::assign(const r9w&)
		{
			return *this;
		}
		r9w& r9w::assign(r9w&&) noexcept
		{
			return *this;
		}
		bool r9w::equal(const r9w&) const noexcept
		{
			return true;
		}

		register_type::ptr r9w::create()
		{
			return std::make_shared<r9w>();
		}
	}
}