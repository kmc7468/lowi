#include <lowi/registers/esi.hh>

#include <lowi/registers/si.hh>

namespace lowi
{
	namespace registers
	{
		esi::esi()
			: register_type("esi", 2 + si::create())
		{}

		bool esi::operator==(const esi& esi) const noexcept
		{
			return equal(esi);
		}
		bool esi::operator!=(const esi& esi) const noexcept
		{
			return !equal(esi);
		}

		esi& esi::assign(const esi&)
		{
			return *this;
		}
		esi& esi::assign(esi&&) noexcept
		{
			return *this;
		}
		bool esi::equal(const esi&) const noexcept
		{
			return true;
		}

		register_type::ptr esi::create()
		{
			return std::make_shared<esi>();
		}
	}
}