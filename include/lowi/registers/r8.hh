#ifndef LOWI_HEADER_REGISTERS_R8_HH
#define LOWI_HEADER_REGISTERS_R8_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class r8 final : public register_type
		{
		public:
			r8();
			r8(const r8& r8) = default;
			r8(r8&& r8) noexcept = default;
			virtual ~r8() override = default;

		public:
			r8& operator=(const r8& r8) = default;
			r8& operator=(r8&& r8) noexcept = default;
			bool operator==(const r8& r8) const noexcept;
			bool operator!=(const r8& r8) const noexcept;

		public:
			r8& assign(const r8& r8);
			r8& assign(r8&& r8) noexcept;
			bool equal(const r8& r8) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif