#ifndef LOWI_HEADER_REGISTERS_ECX_HH
#define LOWI_HEADER_REGISTERS_ECX_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class ecx final : public register_type
		{
		public:
			ecx();
			ecx(const ecx& ecx) = default;
			ecx(ecx&& ecx) noexcept = default;
			virtual ~ecx() override = default;

		public:
			ecx& operator=(const ecx& ecx) = default;
			ecx& operator=(ecx&& ecx) noexcept = default;
			bool operator==(const ecx& ecx) const noexcept;
			bool operator!=(const ecx& ecx) const noexcept;

		public:
			ecx& assign(const ecx& ecx);
			ecx& assign(ecx&& ecx) noexcept;
			bool equal(const ecx& ecx) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif