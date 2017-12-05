#include <lowi/registers/cl.hh>

namespace lowi
{
	namespace registers
	{
		cl::cl()
			: register_type("cl", 1)
		{}

		bool cl::operator==(const cl& cl) const noexcept
		{
			return equal(cl);
		}
		bool cl::operator!=(const cl& cl) const noexcept
		{
			return !equal(cl);
		}

		cl& cl::assign(const cl&)
		{
			return *this;
		}
		cl& cl::assign(cl&&) noexcept
		{
			return *this;
		}
		bool cl::equal(const cl&) const noexcept
		{
			return true;
		}

		register_type::ptr cl::create()
		{
			return std::make_shared<cl>();
		}
	}
}