#include <lowi/registers/ebp.hh>

#include <lowi/registers/bp.hh>

namespace lowi
{
	namespace registers
	{
		ebp::ebp()
			: register_type("ebp", 2 + bp::create())
		{}

		bool ebp::operator==(const ebp& ebp) const noexcept
		{
			return equal(ebp);
		}
		bool ebp::operator!=(const ebp& ebp) const noexcept
		{
			return !equal(ebp);
		}

		ebp& ebp::assign(const ebp&)
		{
			return *this;
		}
		ebp& ebp::assign(ebp&&) noexcept
		{
			return *this;
		}
		bool ebp::equal(const ebp&) const noexcept
		{
			return true;
		}

		register_type::ptr ebp::create()
		{
			return std::make_shared<ebp>();
		}
	}
}