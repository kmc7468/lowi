#ifndef LOWI_HEADER_REGISTERS_DH_HH
#define LOWI_HEADER_REGISTERS_DH_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class dh final : public register_type
		{
		public:
			dh();
			dh(const dh& dh) = default;
			dh(dh&& dh) noexcept = default;
			virtual ~dh() override = default;

		public:
			dh& operator=(const dh& dh) = default;
			dh& operator=(dh&& dh) noexcept = default;
			bool operator==(const dh& dh) const noexcept;
			bool operator!=(const dh& dh) const noexcept;

		public:
			dh& assign(const dh& dh);
			dh& assign(dh&& dh) noexcept;
			bool equal(const dh& dh) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif