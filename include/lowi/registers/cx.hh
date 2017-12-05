#ifndef LOWI_HEADER_REGISTERS_CX_HH
#define LOWI_HEADER_REGISTERS_CX_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class cx final : public register_type
		{
		public:
			cx();
			cx(const cx& cx) = default;
			cx(cx&& cx) noexcept = default;
			virtual ~cx() override = default;

		public:
			cx& operator=(const cx& cx) = default;
			cx& operator=(cx&& cx) noexcept = default;
			bool operator==(const cx& cx) const noexcept;
			bool operator!=(const cx& cx) const noexcept;

		public:
			cx& assign(const cx& cx);
			cx& assign(cx&& cx) noexcept;
			bool equal(const cx& cx) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif