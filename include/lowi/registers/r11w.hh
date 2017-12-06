#ifndef LOWI_HEADER_REGISTERS_R11W_HH
#define LOWI_HEADER_REGISTERS_R11W_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class r11w final : public register_type
		{
		public:
			r11w();
			r11w(const r11w& r11w) = default;
			r11w(r11w&& r11w) noexcept = default;
			virtual ~r11w() override = default;

		public:
			r11w& operator=(const r11w& r11w) = default;
			r11w& operator=(r11w&& r11w) noexcept = default;
			bool operator==(const r11w& r11w) const noexcept;
			bool operator!=(const r11w& r11w) const noexcept;

		public:
			r11w& assign(const r11w& r11w);
			r11w& assign(r11w&& r11w) noexcept;
			bool equal(const r11w& r11w) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif