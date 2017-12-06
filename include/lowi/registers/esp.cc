#include <lowi/registers/esp.hh>

#include <lowi/registers/sp.hh>

namespace lowi
{
	namespace registers
	{
		esp::esp()
			: register_type("esp", 2 + sp::create())
		{}

		bool esp::operator==(const esp& esp) const noexcept
		{
			return equal(esp);
		}
		bool esp::operator!=(const esp& esp) const noexcept
		{
			return !equal(esp);
		}

		esp& esp::assign(const esp&)
		{
			return *this;
		}
		esp& esp::assign(esp&&) noexcept
		{
			return *this;
		}
		bool esp::equal(const esp&) const noexcept
		{
			return true;
		}

		register_type::ptr esp::create()
		{
			return std::make_shared<esp>();
		}
	}
}