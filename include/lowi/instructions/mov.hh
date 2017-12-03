#ifndef LOWI_HEADER_INSTRUCTIONS_MOV_HH
#define LOWI_HEADER_INSTRUCTIONS_MOV_HH

#include <lowi/instruction_type.hh>

namespace lowi
{
	namespace instructions
	{
		class mov final : public instruction_type
		{
		public:
			mov();
			mov(const mov& mov) = default;
			mov(mov&& mov) noexcept = default;
			virtual ~mov() override = default;

		public:
			mov& operator=(const mov& mov) = default;
			mov& operator=(mov&& mov) noexcept = default;
			bool operator==(const mov& mov) const noexcept;
			bool operator!=(const mov& mov) const noexcept;

		public:
			mov& assign(const mov& mov);
			mov& assign(mov&& mov) noexcept;
			virtual bool equal(const instruction_type& instruction_type) const override;
			bool equal(const mov& mov) const noexcept;
		};
	}
}

#endif