#ifndef LOWI_HEADER_REGISTERS_EAX_HH
#define LOWI_HEADER_REGISTERS_EAX_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class eax final : public register_type
		{
		public:
			eax();
			eax(const eax& eax) = default;
			eax(eax&& eax) noexcept = default;
			virtual ~eax() override = default;

		public:
			eax& operator=(const eax& eax) = default;
			eax& operator=(eax&& eax) noexcept = default;
			bool operator==(const eax& eax) const noexcept;
			bool operator!=(const eax& eax) const noexcept;

		public:
			eax& assign(const eax& eax);
			eax& assign(eax&& eax) noexcept;
			bool equal(const eax& eax) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif