#ifndef LOWI_HEADER_REGISTERS_BL_HH
#define LOWI_HEADER_REGISTERS_BL_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class bl final : public register_type
		{
		public:
			bl();
			bl(const bl& bl) = default;
			bl(bl&& bl) noexcept = default;
			virtual ~bl() override = default;

		public:
			bl& operator=(const bl& bl) = default;
			bl& operator=(bl&& bl) noexcept = default;
			bool operator==(const bl& bl) const noexcept;
			bool operator!=(const bl& bl) const noexcept;

		public:
			bl& assign(const bl& bl);
			bl& assign(bl&& bl) noexcept;
			bool equal(const bl& bl) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif