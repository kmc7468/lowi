#ifndef LOWI_HEADER_REGISTERS_R15W_HH
#define LOWI_HEADER_REGISTERS_R15W_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class r15w final : public register_type
		{
		public:
			r15w();
			r15w(const r15w& r15w) = default;
			r15w(r15w&& r15w) noexcept = default;
			virtual ~r15w() override = default;

		public:
			r15w& operator=(const r15w& r15w) = default;
			r15w& operator=(r15w&& r15w) noexcept = default;
			bool operator==(const r15w& r15w) const noexcept;
			bool operator!=(const r15w& r15w) const noexcept;

		public:
			r15w& assign(const r15w& r15w);
			r15w& assign(r15w&& r15w) noexcept;
			bool equal(const r15w& r15w) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif