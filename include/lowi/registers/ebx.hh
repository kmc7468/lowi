#ifndef LOWI_HEADER_REGISTERS_EBX_HH
#define LOWI_HEADER_REGISTERS_EBX_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class ebx final : public register_type
		{
		public:
			ebx();
			ebx(const ebx& ebx) = default;
			ebx(ebx&& ebx) noexcept = default;
			virtual ~ebx() override = default;

		public:
			ebx& operator=(const ebx& ebx) = default;
			ebx& operator=(ebx&& ebx) noexcept = default;
			bool operator==(const ebx& ebx) const noexcept;
			bool operator!=(const ebx& ebx) const noexcept;

		public:
			ebx& assign(const ebx& ebx);
			ebx& assign(ebx&& ebx) noexcept;
			bool equal(const ebx& ebx) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif