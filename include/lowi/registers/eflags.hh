#ifndef LOWI_HEADER_REGISTERS_EFLAGS_HH
#define LOWI_HEADER_REGISTERS_EFLAGS_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class eflags final : public register_type
		{
		public:
			eflags();
			eflags(const eflags& eflags) = default;
			eflags(eflags&& eflags) noexcept = default;
			virtual ~eflags() override = default;

		public:
			eflags& operator=(const eflags& eflags) = default;
			eflags& operator=(eflags&& eflags) noexcept = default;
			bool operator==(const eflags& eflags) const noexcept;
			bool operator!=(const eflags& eflags) const noexcept;

		public:
			eflags& assign(const eflags& eflags);
			eflags& assign(eflags&& eflags) noexcept;
			bool equal(const eflags& eflags) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif