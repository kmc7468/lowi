#include <lowi/registers/rax.hh>

namespace lowi
{
	namespace registers
	{
		rax::rax()
			: register_type("rax", 8)
		{}

		bool rax::operator==(const rax& rax) const noexcept
		{
			return equal(rax);
		}
		bool rax::operator!=(const rax& rax) const noexcept
		{
			return !equal(rax);
		}

		rax& rax::assign(const rax&)
		{
			return *this;
		}
		rax& rax::assign(rax&&) noexcept
		{
			return *this;
		}
		bool rax::equal(const rax&) const noexcept
		{
			return true;
		}

		register_type::ptr rax::create()
		{
			return std::make_shared<rax>();
		}
	}
}