#ifndef LOWI_HEADER_REGISTERS_R14_HH
#define LOWI_HEADER_REGISTERS_R14_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class r14 final : public register_type
		{
		public:
			r14();
			r14(const r14& r14) = default;
			r14(r14&& r14) noexcept = default;
			virtual ~r14() override = default;

		public:
			r14& operator=(const r14& r14) = default;
			r14& operator=(r14&& r14) noexcept = default;
			bool operator==(const r14& r14) const noexcept;
			bool operator!=(const r14& r14) const noexcept;

		public:
			r14& assign(const r14& r14);
			r14& assign(r14&& r14) noexcept;
			bool equal(const r14& r14) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif