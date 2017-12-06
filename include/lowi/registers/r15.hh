#ifndef LOWI_HEADER_REGISTERS_R15_HH
#define LOWI_HEADER_REGISTERS_R15_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class r15 final : public register_type
		{
		public:
			r15();
			r15(const r15& r15) = default;
			r15(r15&& r15) noexcept = default;
			virtual ~r15() override = default;

		public:
			r15& operator=(const r15& r15) = default;
			r15& operator=(r15&& r15) noexcept = default;
			bool operator==(const r15& r15) const noexcept;
			bool operator!=(const r15& r15) const noexcept;

		public:
			r15& assign(const r15& r15);
			r15& assign(r15&& r15) noexcept;
			bool equal(const r15& r15) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif