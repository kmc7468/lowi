#ifndef LOWI_HEADER_REGISTERS_RBP_HH
#define LOWI_HEADER_REGISTERS_RBP_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class rbp final : public register_type
		{
		public:
			rbp();
			rbp(const rbp& rbp) = default;
			rbp(rbp&& rbp) noexcept = default;
			virtual ~rbp() override = default;

		public:
			rbp& operator=(const rbp& rbp) = default;
			rbp& operator=(rbp&& rbp) noexcept = default;
			bool operator==(const rbp& rbp) const noexcept;
			bool operator!=(const rbp& rbp) const noexcept;

		public:
			rbp& assign(const rbp& rbp);
			rbp& assign(rbp&& rbp) noexcept;
			bool equal(const rbp& rbp) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif