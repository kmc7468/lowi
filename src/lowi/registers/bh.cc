#include <lowi/registers/bh.hh>

namespace lowi
{
	namespace registers
	{
		bh::bh()
			: register_type("bh", 1)
		{}

		bool bh::operator==(const bh& bh) const noexcept
		{
			return equal(bh);
		}
		bool bh::operator!=(const bh& bh) const noexcept
		{
			return !equal(bh);
		}

		bh& bh::assign(const bh&)
		{
			return *this;
		}
		bh& bh::assign(bh&&) noexcept
		{
			return *this;
		}
		bool bh::equal(const bh&) const noexcept
		{
			return true;
		}

		register_type::ptr bh::create()
		{
			return std::make_shared<bh>();
		}
	}
}