#include <lowi/registers/ax.hh>

#include <lowi/registers/ah.hh>
#include <lowi/registers/al.hh>

namespace lowi
{
	namespace registers
	{
		ax::ax()
			: register_type("ax", ah::create() + al::create())
		{}

		bool ax::operator==(const ax& ax) const noexcept
		{
			return equal(ax);
		}
		bool ax::operator!=(const ax& ax) const noexcept
		{
			return !equal(ax);
		}

		ax& ax::assign(const ax&)
		{
			return *this;
		}
		ax& ax::assign(ax&&) noexcept
		{
			return *this;
		}
		bool ax::equal(const ax&) const noexcept
		{
			return true;
		}

		register_type::ptr ax::create()
		{
			return std::make_shared<ax>();
		}
	}
}