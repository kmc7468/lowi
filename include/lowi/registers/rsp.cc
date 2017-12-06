#include <lowi/registers/rsp.hh>

#include <lowi/registers/esp.hh>

namespace lowi
{
	namespace registers
	{
		rsp::rsp()
			: register_type("rsp", 4 + esp::create())
		{}

		bool rsp::operator==(const rsp& rsp) const noexcept
		{
			return equal(rsp);
		}
		bool rsp::operator!=(const rsp& rsp) const noexcept
		{
			return !equal(rsp);
		}

		rsp& rsp::assign(const rsp&)
		{
			return *this;
		}
		rsp& rsp::assign(rsp&&) noexcept
		{
			return *this;
		}
		bool rsp::equal(const rsp&) const noexcept
		{
			return true;
		}

		register_type::ptr rsp::create()
		{
			return std::make_shared<rsp>();
		}
	}
}