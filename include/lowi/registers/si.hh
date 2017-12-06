#ifndef LOWI_HEADER_REGISTERS_SI_HH
#define LOWI_HEADER_REGISTERS_SI_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class si final : public register_type
		{
		public:
			si();
			si(const si& si) = default;
			si(si&& si) noexcept = default;
			virtual ~si() override = default;

		public:
			si& operator=(const si& si) = default;
			si& operator=(si&& si) noexcept = default;
			bool operator==(const si& si) const noexcept;
			bool operator!=(const si& si) const noexcept;

		public:
			si& assign(const si& si);
			si& assign(si&& si) noexcept;
			bool equal(const si& si) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif