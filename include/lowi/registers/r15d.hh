#ifndef LOWI_HEADER_REGISTERS_R15D_HH
#define LOWI_HEADER_REGISTERS_R15D_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class r15d final : public register_type
		{
		public:
			r15d();
			r15d(const r15d& r15d) = default;
			r15d(r15d&& r15d) noexcept = default;
			virtual ~r15d() override = default;

		public:
			r15d& operator=(const r15d& r15d) = default;
			r15d& operator=(r15d&& r15d) noexcept = default;
			bool operator==(const r15d& r15d) const noexcept;
			bool operator!=(const r15d& r15d) const noexcept;

		public:
			r15d& assign(const r15d& r15d);
			r15d& assign(r15d&& r15d) noexcept;
			bool equal(const r15d& r15d) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif