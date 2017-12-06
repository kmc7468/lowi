#ifndef LOWI_HEADER_REGISTERS_R15L_HH
#define LOWI_HEADER_REGISTERS_R15L_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class r15l final : public register_type
		{
		public:
			r15l();
			r15l(const r15l& r15l) = default;
			r15l(r15l&& r15l) noexcept = default;
			virtual ~r15l() override = default;

		public:
			r15l& operator=(const r15l& r15l) = default;
			r15l& operator=(r15l&& r15l) noexcept = default;
			bool operator==(const r15l& r15l) const noexcept;
			bool operator!=(const r15l& r15l) const noexcept;

		public:
			r15l& assign(const r15l& r15l);
			r15l& assign(r15l&& r15l) noexcept;
			bool equal(const r15l& r15l) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif