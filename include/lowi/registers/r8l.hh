#ifndef LOWI_HEADER_REGISTERS_R8L_HH
#define LOWI_HEADER_REGISTERS_R8L_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class r8l final : public register_type
		{
		public:
			r8l();
			r8l(const r8l& r8l) = default;
			r8l(r8l&& r8l) noexcept = default;
			virtual ~r8l() override = default;

		public:
			r8l& operator=(const r8l& r8l) = default;
			r8l& operator=(r8l&& r8l) noexcept = default;
			bool operator==(const r8l& r8l) const noexcept;
			bool operator!=(const r8l& r8l) const noexcept;

		public:
			r8l& assign(const r8l& r8l);
			r8l& assign(r8l&& r8l) noexcept;
			bool equal(const r8l& r8l) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif