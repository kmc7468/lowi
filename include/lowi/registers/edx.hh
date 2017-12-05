#ifndef LOWI_HEADER_REGISTERS_EDX_HH
#define LOWI_HEADER_REGISTERS_EDX_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class edx final : public register_type
		{
		public:
			edx();
			edx(const edx& edx) = default;
			edx(edx&& edx) noexcept = default;
			virtual ~edx() override = default;

		public:
			edx& operator=(const edx& edx) = default;
			edx& operator=(edx&& edx) noexcept = default;
			bool operator==(const edx& edx) const noexcept;
			bool operator!=(const edx& edx) const noexcept;

		public:
			edx& assign(const edx& edx);
			edx& assign(edx&& edx) noexcept;
			bool equal(const edx& edx) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif