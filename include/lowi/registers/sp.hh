#ifndef LOWI_HEADER_REGISTERS_SP_HH
#define LOWI_HEADER_REGISTERS_SP_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class sp final : public register_type
		{
		public:
			sp();
			sp(const sp& sp) = default;
			sp(sp&& sp) noexcept = default;
			virtual ~sp() override = default;

		public:
			sp& operator=(const sp& sp) = default;
			sp& operator=(sp&& sp) noexcept = default;
			bool operator==(const sp& sp) const noexcept;
			bool operator!=(const sp& sp) const noexcept;

		public:
			sp& assign(const sp& sp);
			sp& assign(sp&& sp) noexcept;
			bool equal(const sp& sp) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif