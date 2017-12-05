#include <lowi/registers/dl.hh>

namespace lowi
{
	namespace registers
	{
		dl::dl()
			: register_type("dl", 1)
		{}

		bool dl::operator==(const dl& dl) const noexcept
		{
			return equal(dl);
		}
		bool dl::operator!=(const dl& dl) const noexcept
		{
			return !equal(dl);
		}

		dl& dl::assign(const dl&)
		{
			return *this;
		}
		dl& dl::assign(dl&&) noexcept
		{
			return *this;
		}
		bool dl::equal(const dl&) const noexcept
		{
			return true;
		}

		register_type::ptr dl::create()
		{
			return std::make_shared<dl>();
		}
	}
}