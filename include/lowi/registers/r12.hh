#ifndef LOWI_HEADER_REGISTERS_R12_HH
#define LOWI_HEADER_REGISTERS_R12_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class r12 final : public register_type
		{
		public:
			r12();
			r12(const r12& r12) = default;
			r12(r12&& r12) noexcept = default;
			virtual ~r12() override = default;

		public:
			r12& operator=(const r12& r12) = default;
			r12& operator=(r12&& r12) noexcept = default;
			bool operator==(const r12& r12) const noexcept;
			bool operator!=(const r12& r12) const noexcept;

		public:
			r12& assign(const r12& r12);
			r12& assign(r12&& r12) noexcept;
			bool equal(const r12& r12) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif