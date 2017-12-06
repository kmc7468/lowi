#ifndef LOWI_HEADER_REGISTERS_R9D_HH
#define LOWI_HEADER_REGISTERS_R9D_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class r9d final : public register_type
		{
		public:
			r9d();
			r9d(const r9d& r9d) = default;
			r9d(r9d&& r9d) noexcept = default;
			virtual ~r9d() override = default;

		public:
			r9d& operator=(const r9d& r9d) = default;
			r9d& operator=(r9d&& r9d) noexcept = default;
			bool operator==(const r9d& r9d) const noexcept;
			bool operator!=(const r9d& r9d) const noexcept;

		public:
			r9d& assign(const r9d& r9d);
			r9d& assign(r9d&& r9d) noexcept;
			bool equal(const r9d& r9d) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif