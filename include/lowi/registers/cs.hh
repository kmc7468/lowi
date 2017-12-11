#ifndef LOWI_HEADER_REGISTERS_CS_HH
#define LOWI_HEADER_REGISTERS_CS_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class cs final : public register_type
		{
		public:
			cs();
			cs(const cs& cs) = default;
			cs(cs&& cs) noexcept = default;
			virtual ~cs() override = default;

		public:
			cs& operator=(const cs& cs) = default;
			cs& operator=(cs&& cs) noexcept = default;
			bool operator==(const cs& cs) const noexcept;
			bool operator!=(const cs& cs) const noexcept;

		public:
			cs& assign(const cs& cs);
			cs& assign(cs&& cs) noexcept;
			bool equal(const cs& cs) const noexcept;

		public:
			virtual register_additional_data::ptr additional_data() const override;

		public:
			static ptr create();
		};
	}
}

#endif