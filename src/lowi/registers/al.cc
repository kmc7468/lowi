#include <lowi/registers/al.hh>

namespace lowi
{
	namespace registers
	{
		al::al()
			: register_type("al", 1)
		{}

		bool al::operator==(const al& al) const noexcept
		{
			return equal(al);
		}
		bool al::operator!=(const al& al) const noexcept
		{
			return !equal(al);
		}

		al& al::assign(const al&)
		{
			return *this;
		}
		al& al::assign(al&&) noexcept
		{
			return *this;
		}
		bool al::equal(const al&) const noexcept
		{
			return true;
		}

		register_type::ptr al::create()
		{
			return std::make_shared<al>();
		}
	}
}