#ifndef LOWI_HEADER_REGISTERS_RCX_HH
#define LOWI_HEADER_REGISTERS_RCX_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class rcx final : public register_type
		{
		public:
			rcx();
			rcx(const rcx& rcx) = default;
			rcx(rcx&& rcx) noexcept = default;
			virtual ~rcx() override = default;

		public:
			rcx& operator=(const rcx& rcx) = default;
			rcx& operator=(rcx&& rcx) noexcept = default;
			bool operator==(const rcx& rcx) const noexcept;
			bool operator!=(const rcx& rcx) const noexcept;

		public:
			rcx& assign(const rcx& rcx);
			rcx& assign(rcx&& rcx) noexcept;
			bool equal(const rcx& rcx) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif