#include <lowi/registers/edi.hh>

#include <lowi/registers/di.hh>

namespace lowi
{
	namespace registers
	{
		edi::edi()
			: register_type("edi", 2 + di::create())
		{}

		bool edi::operator==(const edi& edi) const noexcept
		{
			return equal(edi);
		}
		bool edi::operator!=(const edi& edi) const noexcept
		{
			return !equal(edi);
		}

		edi& edi::assign(const edi&)
		{
			return *this;
		}
		edi& edi::assign(edi&&) noexcept
		{
			return *this;
		}
		bool edi::equal(const edi&) const noexcept
		{
			return true;
		}

		register_type::ptr edi::create()
		{
			return std::make_shared<edi>();
		}
	}
}