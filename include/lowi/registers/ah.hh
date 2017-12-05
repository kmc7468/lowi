#ifndef LOWI_HEADER_REGISTERS_AH_HH
#define LOWI_HEADER_REGISTERS_AH_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class ah final : public register_type
		{
		public:
			ah();
			ah(const ah& ah) = default;
			ah(ah&& ah) noexcept = default;
			virtual ~ah() override = default;

		public:
			ah& operator=(const ah& ah) = default;
			ah& operator=(ah&& ah) noexcept = default;
			bool operator==(const ah& ah) const noexcept;
			bool operator!=(const ah& ah) const noexcept;

		public:
			ah& assign(const ah& ah);
			ah& assign(ah&& ah) noexcept;
			bool equal(const ah& ah) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif