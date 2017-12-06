#ifndef LOWI_HEADER_REGISTERS_RSP_HH
#define LOWI_HEADER_REGISTERS_RSP_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class rsp final : public register_type
		{
		public:
			rsp();
			rsp(const rsp& rsp) = default;
			rsp(rsp&& rsp) noexcept = default;
			virtual ~rsp() override = default;

		public:
			rsp& operator=(const rsp& rsp) = default;
			rsp& operator=(rsp&& rsp) noexcept = default;
			bool operator==(const rsp& rsp) const noexcept;
			bool operator!=(const rsp& rsp) const noexcept;

		public:
			rsp& assign(const rsp& rsp);
			rsp& assign(rsp&& rsp) noexcept;
			bool equal(const rsp& rsp) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif