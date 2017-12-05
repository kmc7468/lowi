#ifndef LOWI_HEADER_REGISTERS_AX_HH
#define LOWI_HEADER_REGISTERS_AX_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class ax final : public register_type
		{
		public:
			ax();
			ax(const ax& ax) = default;
			ax(ax&& ax) noexcept = default;
			virtual ~ax() override = default;

		public:
			ax& operator=(const ax& ax) = default;
			ax& operator=(ax&& ax) noexcept = default;
			bool operator==(const ax& ax) const noexcept;
			bool operator!=(const ax& ax) const noexcept;

		public:
			ax& assign(const ax& ax);
			ax& assign(ax&& ax) noexcept;
			bool equal(const ax& ax) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif