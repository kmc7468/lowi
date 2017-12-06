#include <lowi/registers/rdi.hh>

#include <lowi/registers/edi.hh>

namespace lowi
{
	namespace registers
	{
		rdi::rdi()
			: register_type("rdi", 4 + edi::create())
		{}

		bool rdi::operator==(const rdi& rdi) const noexcept
		{
			return equal(rdi);
		}
		bool rdi::operator!=(const rdi& rdi) const noexcept
		{
			return !equal(rdi);
		}

		rdi& rdi::assign(const rdi&)
		{
			return *this;
		}
		rdi& rdi::assign(rdi&&) noexcept
		{
			return *this;
		}
		bool rdi::equal(const rdi&) const noexcept
		{
			return true;
		}

		register_type::ptr rdi::create()
		{
			return std::make_shared<rdi>();
		}
	}
}