#ifndef LOWI_HEADER_REGISTERS_R13D_HH
#define LOWI_HEADER_REGISTERS_R13D_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class r13d final : public register_type
		{
		public:
			r13d();
			r13d(const r13d& r13d) = default;
			r13d(r13d&& r13d) noexcept = default;
			virtual ~r13d() override = default;

		public:
			r13d& operator=(const r13d& r13d) = default;
			r13d& operator=(r13d&& r13d) noexcept = default;
			bool operator==(const r13d& r13d) const noexcept;
			bool operator!=(const r13d& r13d) const noexcept;

		public:
			r13d& assign(const r13d& r13d);
			r13d& assign(r13d&& r13d) noexcept;
			bool equal(const r13d& r13d) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif