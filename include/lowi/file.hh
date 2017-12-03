#ifndef LOWI_HEADER_FILE_HH
#define LOWI_HEADER_FILE_HH

#include <lowi/architecture.hh>

namespace lowi
{
	class file final
	{
	public:
		file() = default;
		file(const file& file);
		file(file&& file) noexcept;
		~file() = default;

	public:
		file& operator=(const file& file);
		file& operator=(file&& file) noexcept;
		bool operator==(const file& file) const = delete;
		bool operator!=(const file& file) const = delete;

	public:
		file& assign(const file& file);
		file& assign(file&& file) noexcept;

	public:
		architecture::ptr architecture() const;
		architecture::ptr architecture(const architecture::ptr& new_architecture);

	private:
		architecture::ptr architecture_;
	};
}

#endif