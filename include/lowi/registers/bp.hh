#ifndef LOWI_HEADER_REGISTERS_BP_HH
#define LOWI_HEADER_REGISTERS_BP_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class bp final : public register_type
		{
		public:
			bp();
			bp(const bp& bp) = default;
			bp(bp&& bp) noexcept = default;
			virtual ~bp() override = default;

		public:
			bp& operator=(const bp& bp) = default;
			bp& operator=(bp&& bp) noexcept = default;
			bool operator==(const bp& bp) const noexcept;
			bool operator!=(const bp& bp) const noexcept;

		public:
			bp& assign(const bp& bp);
			bp& assign(bp&& bp) noexcept;
			bool equal(const bp& bp) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif