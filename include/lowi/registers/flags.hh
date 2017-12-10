#ifndef LOWI_HEADER_REGISTERS_FLAGS_HH
#define LOWI_HEADER_REGISTERS_FLAGS_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class flags final : public register_type
		{
		public:
			flags();
			flags(const flags& flags) = default;
			flags(flags&& flags) noexcept = default;
			virtual ~flags() override = default;

		public:
			flags& operator=(const flags& flags) = default;
			flags& operator=(flags&& flags) noexcept = default;
			bool operator==(const flags& flags) const noexcept;
			bool operator!=(const flags& flags) const noexcept;

		public:
			flags& assign(const flags& flags);
			flags& assign(flags&& flags) noexcept;
			bool equal(const flags& flags) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif