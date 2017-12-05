#ifndef LOWI_HEADER_REGISTERS_DL_HH
#define LOWI_HEADER_REGISTERS_DL_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class dl final : public register_type
		{
		public:
			dl();
			dl(const dl& dl) = default;
			dl(dl&& dl) noexcept = default;
			virtual ~dl() override = default;

		public:
			dl& operator=(const dl& dl) = default;
			dl& operator=(dl&& dl) noexcept = default;
			bool operator==(const dl& dl) const noexcept;
			bool operator!=(const dl& dl) const noexcept;

		public:
			dl& assign(const dl& dl);
			dl& assign(dl&& dl) noexcept;
			bool equal(const dl& dl) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif