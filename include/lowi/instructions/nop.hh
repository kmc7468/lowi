#ifndef LOWI_HEADER_INSTRUCTIONS_NOP_HH
#define LOWI_HEADER_INSTRUCTIONS_NOP_HH

#include <lowi/instruction_type.hh>

namespace lowi
{
	namespace instructions
	{
		class nop final : public instruction_type
		{
		public:
			nop();
			nop(const nop& nop) = default;
			nop(nop&& nop) noexcept = default;
			virtual ~nop() override = default;

		public:
			nop& operator=(const nop& nop) = default;
			nop& operator=(nop&& nop) noexcept = default;
			bool operator==(const nop& nop) const noexcept;
			bool operator!=(const nop& nop) const noexcept;

		public:
			nop& assign(const nop& nop);
			nop& assign(nop&& nop) noexcept;
			virtual bool equal(const instruction_type& instruction_type) const override;
			bool equal(const nop& nop) const noexcept;
		};
	}
}

#endif