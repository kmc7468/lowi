#ifndef LOWI_HEADER_REGISTERS_RFLAGS_HH
#define LOWI_HEADER_REGISTERS_RFLAGS_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class rflags final : public register_type
		{
		public:
			rflags();
			rflags(const rflags& rflags) = default;
			rflags(rflags&& rflags) noexcept = default;
			virtual ~rflags() override = default;

		public:
			rflags& operator=(const rflags& rflags) = default;
			rflags& operator=(rflags&& rflags) noexcept = default;
			bool operator==(const rflags& rflags) const noexcept;
			bool operator!=(const rflags& rflags) const noexcept;

		public:
			rflags& assign(const rflags& rflags);
			rflags& assign(rflags&& rflags) noexcept;
			bool equal(const rflags& rflags) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif