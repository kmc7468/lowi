#ifndef LOWI_HEADER_REGISTERS_FS_HH
#define LOWI_HEADER_REGISTERS_FS_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class fs final : public register_type
		{
		public:
			fs();
			fs(const fs& fs) = default;
			fs(fs&& fs) noexcept = default;
			virtual ~fs() override = default;

		public:
			fs& operator=(const fs& fs) = default;
			fs& operator=(fs&& fs) noexcept = default;
			bool operator==(const fs& fs) const noexcept;
			bool operator!=(const fs& fs) const noexcept;

		public:
			fs& assign(const fs& fs);
			fs& assign(fs&& fs) noexcept;
			bool equal(const fs& fs) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif