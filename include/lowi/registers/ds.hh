#ifndef LOWI_HEADER_REGISTERS_DS_HH
#define LOWI_HEADER_REGISTERS_DS_HH

#include <lowi/register_type.hh>

namespace lowi
{
	namespace registers
	{
		class ds final : public register_type
		{
		public:
			ds();
			ds(const ds& ds) = default;
			ds(ds&& ds) noexcept = default;
			virtual ~ds() override = default;

		public:
			ds& operator=(const ds& ds) = default;
			ds& operator=(ds&& ds) noexcept = default;
			bool operator==(const ds& ds) const noexcept;
			bool operator!=(const ds& ds) const noexcept;

		public:
			ds& assign(const ds& ds);
			ds& assign(ds&& ds) noexcept;
			bool equal(const ds& ds) const noexcept;

		public:
			virtual register_additional_data::ptr additional_data() const override;

		public:
			static ptr create();
		};
	}
}

#endif