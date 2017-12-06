#ifndef LOWI_HEADER_REGISTERS_R8W_HH
#define LOWI_HEADER_REGISTERS_R8W_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class r8w final : public register_type
		{
		public:
			r8w();
			r8w(const r8w& r8w) = default;
			r8w(r8w&& r8w) noexcept = default;
			virtual ~r8w() override = default;

		public:
			r8w& operator=(const r8w& r8w) = default;
			r8w& operator=(r8w&& r8w) noexcept = default;
			bool operator==(const r8w& r8w) const noexcept;
			bool operator!=(const r8w& r8w) const noexcept;

		public:
			r8w& assign(const r8w& r8w);
			r8w& assign(r8w&& r8w) noexcept;
			bool equal(const r8w& r8w) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif