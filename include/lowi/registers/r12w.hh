#ifndef LOWI_HEADER_REGISTERS_R12W_HH
#define LOWI_HEADER_REGISTERS_R12W_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class r12w final : public register_type
		{
		public:
			r12w();
			r12w(const r12w& r12w) = default;
			r12w(r12w&& r12w) noexcept = default;
			virtual ~r12w() override = default;

		public:
			r12w& operator=(const r12w& r12w) = default;
			r12w& operator=(r12w&& r12w) noexcept = default;
			bool operator==(const r12w& r12w) const noexcept;
			bool operator!=(const r12w& r12w) const noexcept;

		public:
			r12w& assign(const r12w& r12w);
			r12w& assign(r12w&& r12w) noexcept;
			bool equal(const r12w& r12w) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif