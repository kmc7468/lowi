#ifndef LOWI_HEADER_REGISTERS_BX_HH
#define LOWI_HEADER_REGISTERS_BX_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class bx final : public register_type
		{
		public:
			bx();
			bx(const bx& bx) = default;
			bx(bx&& bx) noexcept = default;
			virtual ~bx() override = default;

		public:
			bx& operator=(const bx& bx) = default;
			bx& operator=(bx&& bx) noexcept = default;
			bool operator==(const bx& bx) const noexcept;
			bool operator!=(const bx& bx) const noexcept;

		public:
			bx& assign(const bx& bx);
			bx& assign(bx&& bx) noexcept;
			bool equal(const bx& bx) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif