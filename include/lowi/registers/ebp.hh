#ifndef LOWI_HEADER_REGISTERS_EBP_HH
#define LOWI_HEADER_REGISTERS_EBP_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class ebp final : public register_type
		{
		public:
			ebp();
			ebp(const ebp& ebp) = default;
			ebp(ebp&& ebp) noexcept = default;
			virtual ~ebp() override = default;

		public:
			ebp& operator=(const ebp& ebp) = default;
			ebp& operator=(ebp&& ebp) noexcept = default;
			bool operator==(const ebp& ebp) const noexcept;
			bool operator!=(const ebp& ebp) const noexcept;

		public:
			ebp& assign(const ebp& ebp);
			ebp& assign(ebp&& ebp) noexcept;
			bool equal(const ebp& ebp) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif