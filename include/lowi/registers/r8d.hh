#ifndef LOWI_HEADER_REGISTERS_R8D_HH
#define LOWI_HEADER_REGISTERS_R8D_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class r8d final : public register_type
		{
		public:
			r8d();
			r8d(const r8d& r8d) = default;
			r8d(r8d&& r8d) noexcept = default;
			virtual ~r8d() override = default;

		public:
			r8d& operator=(const r8d& r8d) = default;
			r8d& operator=(r8d&& r8d) noexcept = default;
			bool operator==(const r8d& r8d) const noexcept;
			bool operator!=(const r8d& r8d) const noexcept;

		public:
			r8d& assign(const r8d& r8d);
			r8d& assign(r8d&& r8d) noexcept;
			bool equal(const r8d& r8d) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif