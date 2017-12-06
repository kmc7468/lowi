#include <lowi/registers/r8w.hh>

#include <lowi/registers/r8l.hh>

namespace lowi
{
	namespace registers
	{
		r8w::r8w()
			: register_type("r8w", 1 + r8l::create())
		{}

		bool r8w::operator==(const r8w& r8w) const noexcept
		{
			return equal(r8w);
		}
		bool r8w::operator!=(const r8w& r8w) const noexcept
		{
			return !equal(r8w);
		}

		r8w& r8w::assign(const r8w&)
		{
			return *this;
		}
		r8w& r8w::assign(r8w&&) noexcept
		{
			return *this;
		}
		bool r8w::equal(const r8w&) const noexcept
		{
			return true;
		}

		register_type::ptr r8w::create()
		{
			return std::make_shared<r8w>();
		}
	}
}