#ifndef LOWI_HEADER_REGISTERS_RSI_HH
#define LOWI_HEADER_REGISTERS_RSI_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class rsi final : public register_type
		{
		public:
			rsi();
			rsi(const rsi& rsi) = default;
			rsi(rsi&& rsi) noexcept = default;
			virtual ~rsi() override = default;

		public:
			rsi& operator=(const rsi& rsi) = default;
			rsi& operator=(rsi&& rsi) noexcept = default;
			bool operator==(const rsi& rsi) const noexcept;
			bool operator!=(const rsi& rsi) const noexcept;

		public:
			rsi& assign(const rsi& rsi);
			rsi& assign(rsi&& rsi) noexcept;
			bool equal(const rsi& rsi) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif