#include <lowi/registers/rsi.hh>

#include <lowi/registers/esi.hh>

namespace lowi
{
	namespace registers
	{
		rsi::rsi()
			: register_type("rsi", 4 + esi::create())
		{}

		bool rsi::operator==(const rsi& rsi) const noexcept
		{
			return equal(rsi);
		}
		bool rsi::operator!=(const rsi& rsi) const noexcept
		{
			return !equal(rsi);
		}

		rsi& rsi::assign(const rsi&)
		{
			return *this;
		}
		rsi& rsi::assign(rsi&&) noexcept
		{
			return *this;
		}
		bool rsi::equal(const rsi&) const noexcept
		{
			return true;
		}

		register_type::ptr rsi::create()
		{
			return std::make_shared<rsi>();
		}
	}
}