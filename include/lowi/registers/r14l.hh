#ifndef LOWI_HEADER_REGISTERS_R14L_HH
#define LOWI_HEADER_REGISTERS_R14L_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class r14l final : public register_type
		{
		public:
			r14l();
			r14l(const r14l& r14l) = default;
			r14l(r14l&& r14l) noexcept = default;
			virtual ~r14l() override = default;

		public:
			r14l& operator=(const r14l& r14l) = default;
			r14l& operator=(r14l&& r14l) noexcept = default;
			bool operator==(const r14l& r14l) const noexcept;
			bool operator!=(const r14l& r14l) const noexcept;

		public:
			r14l& assign(const r14l& r14l);
			r14l& assign(r14l&& r14l) noexcept;
			bool equal(const r14l& r14l) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif