#ifndef LOWI_HEADER_REGISTERS_CL_HH
#define LOWI_HEADER_REGISTERS_CL_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class cl final : public register_type
		{
		public:
			cl();
			cl(const cl& cl) = default;
			cl(cl&& cl) noexcept = default;
			virtual ~cl() override = default;

		public:
			cl& operator=(const cl& cl) = default;
			cl& operator=(cl&& cl) noexcept = default;
			bool operator==(const cl& cl) const noexcept;
			bool operator!=(const cl& cl) const noexcept;

		public:
			cl& assign(const cl& cl);
			cl& assign(cl&& cl) noexcept;
			bool equal(const cl& cl) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif