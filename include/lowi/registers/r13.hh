#ifndef LOWI_HEADER_REGISTERS_R13_HH
#define LOWI_HEADER_REGISTERS_R13_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class r13 final : public register_type
		{
		public:
			r13();
			r13(const r13& r13) = default;
			r13(r13&& r13) noexcept = default;
			virtual ~r13() override = default;

		public:
			r13& operator=(const r13& r13) = default;
			r13& operator=(r13&& r13) noexcept = default;
			bool operator==(const r13& r13) const noexcept;
			bool operator!=(const r13& r13) const noexcept;

		public:
			r13& assign(const r13& r13);
			r13& assign(r13&& r13) noexcept;
			bool equal(const r13& r13) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif