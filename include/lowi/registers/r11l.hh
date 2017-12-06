#ifndef LOWI_HEADER_REGISTERS_R11L_HH
#define LOWI_HEADER_REGISTERS_R11L_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class r11l final : public register_type
		{
		public:
			r11l();
			r11l(const r11l& r11l) = default;
			r11l(r11l&& r11l) noexcept = default;
			virtual ~r11l() override = default;

		public:
			r11l& operator=(const r11l& r11l) = default;
			r11l& operator=(r11l&& r11l) noexcept = default;
			bool operator==(const r11l& r11l) const noexcept;
			bool operator!=(const r11l& r11l) const noexcept;

		public:
			r11l& assign(const r11l& r11l);
			r11l& assign(r11l&& r11l) noexcept;
			bool equal(const r11l& r11l) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif