#ifndef LOWI_HEADER_REGISTERS_R9_HH
#define LOWI_HEADER_REGISTERS_R9_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class r9 final : public register_type
		{
		public:
			r9();
			r9(const r9& r9) = default;
			r9(r9&& r9) noexcept = default;
			virtual ~r9() override = default;

		public:
			r9& operator=(const r9& r9) = default;
			r9& operator=(r9&& r9) noexcept = default;
			bool operator==(const r9& r9) const noexcept;
			bool operator!=(const r9& r9) const noexcept;

		public:
			r9& assign(const r9& r9);
			r9& assign(r9&& r9) noexcept;
			bool equal(const r9& r9) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif