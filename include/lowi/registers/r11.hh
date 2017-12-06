#ifndef LOWI_HEADER_REGISTERS_R11_HH
#define LOWI_HEADER_REGISTERS_R11_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class r11 final : public register_type
		{
		public:
			r11();
			r11(const r11& r11) = default;
			r11(r11&& r11) noexcept = default;
			virtual ~r11() override = default;

		public:
			r11& operator=(const r11& r11) = default;
			r11& operator=(r11&& r11) noexcept = default;
			bool operator==(const r11& r11) const noexcept;
			bool operator!=(const r11& r11) const noexcept;

		public:
			r11& assign(const r11& r11);
			r11& assign(r11&& r11) noexcept;
			bool equal(const r11& r11) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif