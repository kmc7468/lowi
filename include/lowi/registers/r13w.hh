#ifndef LOWI_HEADER_REGISTERS_R13W_HH
#define LOWI_HEADER_REGISTERS_R13W_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class r13w final : public register_type
		{
		public:
			r13w();
			r13w(const r13w& r13w) = default;
			r13w(r13w&& r13w) noexcept = default;
			virtual ~r13w() override = default;

		public:
			r13w& operator=(const r13w& r13w) = default;
			r13w& operator=(r13w&& r13w) noexcept = default;
			bool operator==(const r13w& r13w) const noexcept;
			bool operator!=(const r13w& r13w) const noexcept;

		public:
			r13w& assign(const r13w& r13w);
			r13w& assign(r13w&& r13w) noexcept;
			bool equal(const r13w& r13w) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif