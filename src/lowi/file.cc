#include <lowi/file.hh>

#include <utility>

namespace lowi
{
	file::file(const file& file)
		: architecture_(file.architecture_)
	{}
	file::file(file&& file) noexcept
		: architecture_(std::move(file.architecture_))
	{}

	file& file::operator=(const file& file)
	{
		return assign(file);
	}
	file& file::operator=(file&& file) noexcept
	{
		return assign(std::move(file));
	}

	file& file::assign(const file& file)
	{
		architecture_ = file.architecture_;
		return *this;
	}
	file& file::assign(file&& file) noexcept
	{
		architecture_ = std::move(file.architecture_);
		return *this;
	}

	architecture::ptr file::architecture() const
	{
		return architecture_;
	}
	architecture::ptr file::architecture(const architecture::ptr& new_architecture)
	{
		return architecture_ = new_architecture;
	}
}