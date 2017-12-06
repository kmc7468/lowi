#ifndef LOWI_HEADER_REGISTERS_RDI_HH
#define LOWI_HEADER_REGISTERS_RDI_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class rdi final : public register_type
		{
		public:
			rdi();
			rdi(const rdi& rdi) = default;
			rdi(rdi&& rdi) noexcept = default;
			virtual ~rdi() override = default;

		public:
			rdi& operator=(const rdi& rdi) = default;
			rdi& operator=(rdi&& rdi) noexcept = default;
			bool operator==(const rdi& rdi) const noexcept;
			bool operator!=(const rdi& rdi) const noexcept;

		public:
			rdi& assign(const rdi& rdi);
			rdi& assign(rdi&& rdi) noexcept;
			bool equal(const rdi& rdi) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif