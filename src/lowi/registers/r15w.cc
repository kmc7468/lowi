#include <lowi/registers/r15w.hh>

#include <lowi/registers/r15l.hh>

namespace lowi
{
	namespace registers
	{
		r15w::r15w()
			: register_type("r15w", 1 + r15l::create())
		{}

		bool r15w::operator==(const r15w& r15w) const noexcept
		{
			return equal(r15w);
		}
		bool r15w::operator!=(const r15w& r15w) const noexcept
		{
			return !equal(r15w);
		}

		r15w& r15w::assign(const r15w&)
		{
			return *this;
		}
		r15w& r15w::assign(r15w&&) noexcept
		{
			return *this;
		}
		bool r15w::equal(const r15w&) const noexcept
		{
			return true;
		}

		register_type::ptr r15w::create()
		{
			return std::make_shared<r15w>();
		}
	}
}