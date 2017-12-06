#ifndef LOWI_HEADER_REGISTERS_R11D_HH
#define LOWI_HEADER_REGISTERS_R11D_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class r11d final : public register_type
		{
		public:
			r11d();
			r11d(const r11d& r11d) = default;
			r11d(r11d&& r11d) noexcept = default;
			virtual ~r11d() override = default;

		public:
			r11d& operator=(const r11d& r11d) = default;
			r11d& operator=(r11d&& r11d) noexcept = default;
			bool operator==(const r11d& r11d) const noexcept;
			bool operator!=(const r11d& r11d) const noexcept;

		public:
			r11d& assign(const r11d& r11d);
			r11d& assign(r11d&& r11d) noexcept;
			bool equal(const r11d& r11d) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif