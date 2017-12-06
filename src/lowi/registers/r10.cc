#include <lowi/registers/r10.hh>

#include <lowi/registers/r10d.hh>

namespace lowi
{
	namespace registers
	{
		r10::r10()
			: register_type("r10", 4 + r10d::create())
		{}

		bool r10::operator==(const r10& r10) const noexcept
		{
			return equal(r10);
		}
		bool r10::operator!=(const r10& r10) const noexcept
		{
			return !equal(r10);
		}

		r10& r10::assign(const r10&)
		{
			return *this;
		}
		r10& r10::assign(r10&&) noexcept
		{
			return *this;
		}
		bool r10::equal(const r10&) const noexcept
		{
			return true;
		}

		register_type::ptr r10::create()
		{
			return std::make_shared<r10>();
		}
	}
}