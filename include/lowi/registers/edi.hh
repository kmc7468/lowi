#ifndef LOWI_HEADER_REGISTERS_EDI_HH
#define LOWI_HEADER_REGISTERS_EDI_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class edi final : public register_type
		{
		public:
			edi();
			edi(const edi& edi) = default;
			edi(edi&& edi) noexcept = default;
			virtual ~edi() override = default;

		public:
			edi& operator=(const edi& edi) = default;
			edi& operator=(edi&& edi) noexcept = default;
			bool operator==(const edi& edi) const noexcept;
			bool operator!=(const edi& edi) const noexcept;

		public:
			edi& assign(const edi& edi);
			edi& assign(edi&& edi) noexcept;
			bool equal(const edi& edi) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif