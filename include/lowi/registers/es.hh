#ifndef LOWI_HEADER_REGISTERS_ES_HH
#define LOWI_HEADER_REGISTERS_ES_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class es final : public register_type
		{
		public:
			es();
			es(const es& es) = default;
			es(es&& es) noexcept = default;
			virtual ~es() override = default;

		public:
			es& operator=(const es& es) = default;
			es& operator=(es&& es) noexcept = default;
			bool operator==(const es& es) const noexcept;
			bool operator!=(const es& es) const noexcept;

		public:
			es& assign(const es& es);
			es& assign(es&& es) noexcept;
			bool equal(const es& es) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif