#ifndef LOWI_HEADER_REGISTERS_GS_HH
#define LOWI_HEADER_REGISTERS_GS_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class gs final : public register_type
		{
		public:
			gs();
			gs(const gs& gs) = default;
			gs(gs&& gs) noexcept = default;
			virtual ~gs() override = default;

		public:
			gs& operator=(const gs& gs) = default;
			gs& operator=(gs&& gs) noexcept = default;
			bool operator==(const gs& gs) const noexcept;
			bool operator!=(const gs& gs) const noexcept;

		public:
			gs& assign(const gs& gs);
			gs& assign(gs&& gs) noexcept;
			bool equal(const gs& gs) const noexcept;

		public:
			virtual register_additional_data::ptr additional_data() const override;

		public:
			static ptr create();
		};
	}
}

#endif