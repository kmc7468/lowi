#ifndef LOWI_HEADER_REGISTERS_CH_HH
#define LOWI_HEADER_REGISTERS_CH_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class ch final : public register_type
		{
		public:
			ch();
			ch(const ch& ch) = default;
			ch(ch&& ch) noexcept = default;
			virtual ~ch() override = default;

		public:
			ch& operator=(const ch& ch) = default;
			ch& operator=(ch&& ch) noexcept = default;
			bool operator==(const ch& ch) const noexcept;
			bool operator!=(const ch& ch) const noexcept;

		public:
			ch& assign(const ch& ch);
			ch& assign(ch&& ch) noexcept;
			bool equal(const ch& ch) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif