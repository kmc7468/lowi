#include <lowi/registers/r10w.hh>

#include <lowi/registers/r10l.hh>

namespace lowi
{
	namespace registers
	{
		r10w::r10w()
			: register_type("r10w", 1 + r10l::create())
		{}

		bool r10w::operator==(const r10w& r10w) const noexcept
		{
			return equal(r10w);
		}
		bool r10w::operator!=(const r10w& r10w) const noexcept
		{
			return !equal(r10w);
		}

		r10w& r10w::assign(const r10w&)
		{
			return *this;
		}
		r10w& r10w::assign(r10w&&) noexcept
		{
			return *this;
		}
		bool r10w::equal(const r10w&) const noexcept
		{
			return true;
		}

		register_type::ptr r10w::create()
		{
			return std::make_shared<r10w>();
		}
	}
}