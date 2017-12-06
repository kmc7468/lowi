#include <lowi/registers/bp.hh>

namespace lowi
{
	namespace registers
	{
		bp::bp()
			: register_type("bp", 2)
		{}

		bool bp::operator==(const bp& bp) const noexcept
		{
			return equal(bp);
		}
		bool bp::operator!=(const bp& bp) const noexcept
		{
			return !equal(bp);
		}

		bp& bp::assign(const bp&)
		{
			return *this;
		}
		bp& bp::assign(bp&&) noexcept
		{
			return *this;
		}
		bool bp::equal(const bp&) const noexcept
		{
			return true;
		}

		register_type::ptr bp::create()
		{
			return std::make_shared<bp>();
		}
	}
}