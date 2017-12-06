#ifndef LOWI_HEADER_REGISTERS_R9W_HH
#define LOWI_HEADER_REGISTERS_R9W_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class r9w final : public register_type
		{
		public:
			r9w();
			r9w(const r9w& r9w) = default;
			r9w(r9w&& r9w) noexcept = default;
			virtual ~r9w() override = default;

		public:
			r9w& operator=(const r9w& r9w) = default;
			r9w& operator=(r9w&& r9w) noexcept = default;
			bool operator==(const r9w& r9w) const noexcept;
			bool operator!=(const r9w& r9w) const noexcept;

		public:
			r9w& assign(const r9w& r9w);
			r9w& assign(r9w&& r9w) noexcept;
			bool equal(const r9w& r9w) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif