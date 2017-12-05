#ifndef LOWI_HEADER_REGISTERS_DX_HH
#define LOWI_HEADER_REGISTERS_DX_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class dx final : public register_type
		{
		public:
			dx();
			dx(const dx& dx) = default;
			dx(dx&& dx) noexcept = default;
			virtual ~dx() override = default;

		public:
			dx& operator=(const dx& dx) = default;
			dx& operator=(dx&& dx) noexcept = default;
			bool operator==(const dx& dx) const noexcept;
			bool operator!=(const dx& dx) const noexcept;

		public:
			dx& assign(const dx& dx);
			dx& assign(dx&& dx) noexcept;
			bool equal(const dx& dx) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif