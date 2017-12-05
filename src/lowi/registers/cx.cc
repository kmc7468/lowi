#include <lowi/registers/cx.hh>

#include <lowi/registers/ch.hh>
#include <lowi/registers/cl.hh>

namespace lowi
{
	namespace registers
	{
		cx::cx()
			: register_type("cx", ch::create() + cl::create())
		{}

		bool cx::operator==(const cx& cx) const noexcept
		{
			return equal(cx);
		}
		bool cx::operator!=(const cx& cx) const noexcept
		{
			return !equal(cx);
		}

		cx& cx::assign(const cx&)
		{
			return *this;
		}
		cx& cx::assign(cx&&) noexcept
		{
			return *this;
		}
		bool cx::equal(const cx&) const noexcept
		{
			return true;
		}

		register_type::ptr cx::create()
		{
			return std::make_shared<cx>();
		}
	}
}