#include <lowi/registers/r13w.hh>

#include <lowi/registers/r13l.hh>

namespace lowi
{
	namespace registers
	{
		r13w::r13w()
			: register_type("r13w", 1 + r13l::create())
		{}

		bool r13w::operator==(const r13w& r13w) const noexcept
		{
			return equal(r13w);
		}
		bool r13w::operator!=(const r13w& r13w) const noexcept
		{
			return !equal(r13w);
		}

		r13w& r13w::assign(const r13w&)
		{
			return *this;
		}
		r13w& r13w::assign(r13w&&) noexcept
		{
			return *this;
		}
		bool r13w::equal(const r13w&) const noexcept
		{
			return true;
		}

		register_type::ptr r13w::create()
		{
			return std::make_shared<r13w>();
		}
	}
}