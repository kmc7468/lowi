#ifndef LOWI_HEADER_REGISTERS_BH_HH
#define LOWI_HEADER_REGISTERS_BH_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class bh final : public register_type
		{
		public:
			bh();
			bh(const bh& bh) = default;
			bh(bh&& bh) noexcept = default;
			virtual ~bh() override = default;

		public:
			bh& operator=(const bh& bh) = default;
			bh& operator=(bh&& bh) noexcept = default;
			bool operator==(const bh& bh) const noexcept;
			bool operator!=(const bh& bh) const noexcept;

		public:
			bh& assign(const bh& bh);
			bh& assign(bh&& bh) noexcept;
			bool equal(const bh& bh) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif