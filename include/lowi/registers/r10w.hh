#ifndef LOWI_HEADER_REGISTERS_R10W_HH
#define LOWI_HEADER_REGISTERS_R10W_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class r10w final : public register_type
		{
		public:
			r10w();
			r10w(const r10w& r10w) = default;
			r10w(r10w&& r10w) noexcept = default;
			virtual ~r10w() override = default;

		public:
			r10w& operator=(const r10w& r10w) = default;
			r10w& operator=(r10w&& r10w) noexcept = default;
			bool operator==(const r10w& r10w) const noexcept;
			bool operator!=(const r10w& r10w) const noexcept;

		public:
			r10w& assign(const r10w& r10w);
			r10w& assign(r10w&& r10w) noexcept;
			bool equal(const r10w& r10w) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif