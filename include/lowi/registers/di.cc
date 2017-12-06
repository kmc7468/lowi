#include <lowi/registers/di.hh>

namespace lowi
{
	namespace registers
	{
		di::di()
			: register_type("di", 2)
		{}

		bool di::operator==(const di& di) const noexcept
		{
			return equal(di);
		}
		bool di::operator!=(const di& di) const noexcept
		{
			return !equal(di);
		}

		di& di::assign(const di&)
		{
			return *this;
		}
		di& di::assign(di&&) noexcept
		{
			return *this;
		}
		bool di::equal(const di&) const noexcept
		{
			return true;
		}

		register_type::ptr di::create()
		{
			return std::make_shared<di>();
		}
	}
}