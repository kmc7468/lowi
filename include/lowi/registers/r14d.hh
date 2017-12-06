#ifndef LOWI_HEADER_REGISTERS_R14D_HH
#define LOWI_HEADER_REGISTERS_R14D_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class r14d final : public register_type
		{
		public:
			r14d();
			r14d(const r14d& r14d) = default;
			r14d(r14d&& r14d) noexcept = default;
			virtual ~r14d() override = default;

		public:
			r14d& operator=(const r14d& r14d) = default;
			r14d& operator=(r14d&& r14d) noexcept = default;
			bool operator==(const r14d& r14d) const noexcept;
			bool operator!=(const r14d& r14d) const noexcept;

		public:
			r14d& assign(const r14d& r14d);
			r14d& assign(r14d&& r14d) noexcept;
			bool equal(const r14d& r14d) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif