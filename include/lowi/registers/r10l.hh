#ifndef LOWI_HEADER_REGISTERS_R10L_HH
#define LOWI_HEADER_REGISTERS_R10L_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class r10l final : public register_type
		{
		public:
			r10l();
			r10l(const r10l& r10l) = default;
			r10l(r10l&& r10l) noexcept = default;
			virtual ~r10l() override = default;

		public:
			r10l& operator=(const r10l& r10l) = default;
			r10l& operator=(r10l&& r10l) noexcept = default;
			bool operator==(const r10l& r10l) const noexcept;
			bool operator!=(const r10l& r10l) const noexcept;

		public:
			r10l& assign(const r10l& r10l);
			r10l& assign(r10l&& r10l) noexcept;
			bool equal(const r10l& r10l) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif