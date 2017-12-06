#ifndef LOWI_HEADER_REGISTERS_R10_HH
#define LOWI_HEADER_REGISTERS_R10_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class r10 final : public register_type
		{
		public:
			r10();
			r10(const r10& r10) = default;
			r10(r10&& r10) noexcept = default;
			virtual ~r10() override = default;

		public:
			r10& operator=(const r10& r10) = default;
			r10& operator=(r10&& r10) noexcept = default;
			bool operator==(const r10& r10) const noexcept;
			bool operator!=(const r10& r10) const noexcept;

		public:
			r10& assign(const r10& r10);
			r10& assign(r10&& r10) noexcept;
			bool equal(const r10& r10) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif