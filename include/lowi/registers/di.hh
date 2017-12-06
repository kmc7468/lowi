#ifndef LOWI_HEADER_REGISTERS_DI_HH
#define LOWI_HEADER_REGISTERS_DI_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class di final : public register_type
		{
		public:
			di();
			di(const di& di) = default;
			di(di&& di) noexcept = default;
			virtual ~di() override = default;

		public:
			di& operator=(const di& di) = default;
			di& operator=(di&& di) noexcept = default;
			bool operator==(const di& di) const noexcept;
			bool operator!=(const di& di) const noexcept;

		public:
			di& assign(const di& di);
			di& assign(di&& di) noexcept;
			bool equal(const di& di) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif