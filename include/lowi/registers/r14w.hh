#ifndef LOWI_HEADER_REGISTERS_R14W_HH
#define LOWI_HEADER_REGISTERS_R14W_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class r14w final : public register_type
		{
		public:
			r14w();
			r14w(const r14w& r14w) = default;
			r14w(r14w&& r14w) noexcept = default;
			virtual ~r14w() override = default;

		public:
			r14w& operator=(const r14w& r14w) = default;
			r14w& operator=(r14w&& r14w) noexcept = default;
			bool operator==(const r14w& r14w) const noexcept;
			bool operator!=(const r14w& r14w) const noexcept;

		public:
			r14w& assign(const r14w& r14w);
			r14w& assign(r14w&& r14w) noexcept;
			bool equal(const r14w& r14w) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif