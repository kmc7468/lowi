#ifndef LOWI_HEADER_REGISTERS_ESP_HH
#define LOWI_HEADER_REGISTERS_ESP_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class esp final : public register_type
		{
		public:
			esp();
			esp(const esp& esp) = default;
			esp(esp&& esp) noexcept = default;
			virtual ~esp() override = default;

		public:
			esp& operator=(const esp& esp) = default;
			esp& operator=(esp&& esp) noexcept = default;
			bool operator==(const esp& esp) const noexcept;
			bool operator!=(const esp& esp) const noexcept;

		public:
			esp& assign(const esp& esp);
			esp& assign(esp&& esp) noexcept;
			bool equal(const esp& esp) const noexcept;

		public:
			static ptr create();
		};
	}
}

#endif