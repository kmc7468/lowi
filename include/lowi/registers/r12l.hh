#ifndef LOWI_HEADER_REGISTERS_R12L_HH
#define LOWI_HEADER_REGISTERS_R12L_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class r12l final : public register_type
		{
		public:
			r12l();
			r12l(const r12l& r12l) = default;
			r12l(r12l&& r12l) noexcept = default;
			virtual ~r12l() override = default;

		public:
			r12l& operator=(const r12l& r12l) = default;
			r12l& operator=(r12l&& r12l) noexcept = default;
			bool operator==(const r12l& r12l) const noexcept;
			bool operator!=(const r12l& r12l) const noexcept;

		public:
			r12l& assign(const r12l& r12l);
			r12l& assign(r12l&& r12l) noexcept;
			bool equal(const r12l& r12l) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif