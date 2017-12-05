#ifndef LOWI_HEADER_REGISTERS_RDX_HH
#define LOWI_HEADER_REGISTERS_RDX_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class rdx final : public register_type
		{
		public:
			rdx();
			rdx(const rdx& rdx) = default;
			rdx(rdx&& rdx) noexcept = default;
			virtual ~rdx() override = default;

		public:
			rdx& operator=(const rdx& rdx) = default;
			rdx& operator=(rdx&& rdx) noexcept = default;
			bool operator==(const rdx& rdx) const noexcept;
			bool operator!=(const rdx& rdx) const noexcept;

		public:
			rdx& assign(const rdx& rdx);
			rdx& assign(rdx&& rdx) noexcept;
			bool equal(const rdx& rdx) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif