#ifndef LOWI_HEADER_REGISTERS_R9L_HH
#define LOWI_HEADER_REGISTERS_R9L_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class r9l final : public register_type
		{
		public:
			r9l();
			r9l(const r9l& r9l) = default;
			r9l(r9l&& r9l) noexcept = default;
			virtual ~r9l() override = default;

		public:
			r9l& operator=(const r9l& r9l) = default;
			r9l& operator=(r9l&& r9l) noexcept = default;
			bool operator==(const r9l& r9l) const noexcept;
			bool operator!=(const r9l& r9l) const noexcept;

		public:
			r9l& assign(const r9l& r9l);
			r9l& assign(r9l&& r9l) noexcept;
			bool equal(const r9l& r9l) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif