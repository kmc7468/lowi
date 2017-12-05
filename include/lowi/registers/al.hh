#ifndef LOWI_HEADER_REGISTERS_AL_HH
#define LOWI_HEADER_REGISTERS_AL_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class al final : public register_type
		{
		public:
			al();
			al(const al& al) = default;
			al(al&& al) noexcept = default;
			virtual ~al() override = default;

		public:
			al& operator=(const al& al) = default;
			al& operator=(al&& al) noexcept = default;
			bool operator==(const al& al) const noexcept;
			bool operator!=(const al& al) const noexcept;

		public:
			al& assign(const al& al);
			al& assign(al&& al) noexcept;
			bool equal(const al& al) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif