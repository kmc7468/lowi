#ifndef LOWI_HEADER_REGISTERS_R12D_HH
#define LOWI_HEADER_REGISTERS_R12D_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class r12d final : public register_type
		{
		public:
			r12d();
			r12d(const r12d& r12d) = default;
			r12d(r12d&& r12d) noexcept = default;
			virtual ~r12d() override = default;

		public:
			r12d& operator=(const r12d& r12d) = default;
			r12d& operator=(r12d&& r12d) noexcept = default;
			bool operator==(const r12d& r12d) const noexcept;
			bool operator!=(const r12d& r12d) const noexcept;

		public:
			r12d& assign(const r12d& r12d);
			r12d& assign(r12d&& r12d) noexcept;
			bool equal(const r12d& r12d) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif