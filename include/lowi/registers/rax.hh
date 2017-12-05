#ifndef LOWI_HEADER_REGISTERS_RAX_HH
#define LOWI_HEADER_REGISTERS_RAX_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class rax final : public register_type
		{
		public:
			rax();
			rax(const rax& rax) = default;
			rax(rax&& rax) noexcept = default;
			virtual ~rax() override = default;

		public:
			rax& operator=(const rax& rax) = default;
			rax& operator=(rax&& rax) noexcept = default;
			bool operator==(const rax& rax) const noexcept;
			bool operator!=(const rax& rax) const noexcept;

		public:
			rax& assign(const rax& rax);
			rax& assign(rax&& rax) noexcept;
			bool equal(const rax& rax) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif