#ifndef LOWI_HEADER_REGISTERS_R13L_HH
#define LOWI_HEADER_REGISTERS_R13L_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class r13l final : public register_type
		{
		public:
			r13l();
			r13l(const r13l& r13l) = default;
			r13l(r13l&& r13l) noexcept = default;
			virtual ~r13l() override = default;

		public:
			r13l& operator=(const r13l& r13l) = default;
			r13l& operator=(r13l&& r13l) noexcept = default;
			bool operator==(const r13l& r13l) const noexcept;
			bool operator!=(const r13l& r13l) const noexcept;

		public:
			r13l& assign(const r13l& r13l);
			r13l& assign(r13l&& r13l) noexcept;
			bool equal(const r13l& r13l) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif