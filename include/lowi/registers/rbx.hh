#ifndef LOWI_HEADER_REGISTERS_RBX_HH
#define LOWI_HEADER_REGISTERS_RBX_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class rbx final : public register_type
		{
		public:
			rbx();
			rbx(const rbx& rbx) = default;
			rbx(rbx&& rbx) noexcept = default;
			virtual ~rbx() override = default;

		public:
			rbx& operator=(const rbx& rbx) = default;
			rbx& operator=(rbx&& rbx) noexcept = default;
			bool operator==(const rbx& rbx) const noexcept;
			bool operator!=(const rbx& rbx) const noexcept;

		public:
			rbx& assign(const rbx& rbx);
			rbx& assign(rbx&& rbx) noexcept;
			bool equal(const rbx& rbx) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif