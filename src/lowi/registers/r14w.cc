#include <lowi/registers/r14w.hh>

#include <lowi/registers/r14l.hh>

namespace lowi
{
	namespace registers
	{
		r14w::r14w()
			: register_type("r14w", 1 + r14l::create())
		{}

		bool r14w::operator==(const r14w& r14w) const noexcept
		{
			return equal(r14w);
		}
		bool r14w::operator!=(const r14w& r14w) const noexcept
		{
			return !equal(r14w);
		}

		r14w& r14w::assign(const r14w&)
		{
			return *this;
		}
		r14w& r14w::assign(r14w&&) noexcept
		{
			return *this;
		}
		bool r14w::equal(const r14w&) const noexcept
		{
			return true;
		}

		register_type::ptr r14w::create()
		{
			return std::make_shared<r14w>();
		}
	}
}