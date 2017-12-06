#ifndef LOWI_HEADER_REGISTERS_R10D_HH
#define LOWI_HEADER_REGISTERS_R10D_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class r10d final : public register_type
		{
		public:
			r10d();
			r10d(const r10d& r10d) = default;
			r10d(r10d&& r10d) noexcept = default;
			virtual ~r10d() override = default;

		public:
			r10d& operator=(const r10d& r10d) = default;
			r10d& operator=(r10d&& r10d) noexcept = default;
			bool operator==(const r10d& r10d) const noexcept;
			bool operator!=(const r10d& r10d) const noexcept;

		public:
			r10d& assign(const r10d& r10d);
			r10d& assign(r10d&& r10d) noexcept;
			bool equal(const r10d& r10d) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif