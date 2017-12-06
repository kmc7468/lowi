#ifndef LOWI_HEADER_REGISTERS_ESI_HH
#define LOWI_HEADER_REGISTERS_ESI_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class esi final : public register_type
		{
		public:
			esi();
			esi(const esi& esi) = default;
			esi(esi&& esi) noexcept = default;
			virtual ~esi() override = default;

		public:
			esi& operator=(const esi& esi) = default;
			esi& operator=(esi&& esi) noexcept = default;
			bool operator==(const esi& esi) const noexcept;
			bool operator!=(const esi& esi) const noexcept;

		public:
			esi& assign(const esi& esi);
			esi& assign(esi&& esi) noexcept;
			bool equal(const esi& esi) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif