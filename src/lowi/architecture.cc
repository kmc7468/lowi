#include <lowi/architecture.hh>

#include <algorithm>

namespace lowi
{
	bool architecture::operator==(const architecture& architecture) const
	{
		return equal(architecture);
	}
	bool architecture::operator==(const ptr& architecture) const
	{
		return equal(architecture);
	}
	bool architecture::operator!=(const architecture& architecture) const
	{
		return !equal(architecture);
	}
	bool architecture::operator!=(const ptr& architecture) const
	{
		return !equal(architecture);
	}

	bool architecture::equal(const architecture& architecture) const
	{
		return name_ == architecture.name_ && author_ == architecture.author_ &&
			id_ == architecture.id_;
	}
	bool architecture::equal(const ptr& architecture) const
	{
		return equal(*architecture);
	}

	void architecture::add_register(const register_type::ptr& register_type)
	{
		if (!locked_)
		{
			if (std::find_if(registers_.begin(), registers_.end(), [&register_type](const register_type::ptr& other_register_type)
			{
				return register_type->equal(*other_register_type);
			}) == registers_.end())
			{
				registers_.push_back(register_type);
			}
		}
	}
	void architecture::remove_register(const register_type::ptr& register_type)
	{
		if (!locked_)
		{
			std::vector<register_type::ptr>::iterator iter;
			iter = std::find_if(registers_.begin(), registers_.end(), [&register_type](const register_type::ptr& other_register_type)
			{
				return register_type->equal(*other_register_type);
			});

			if (iter != registers_.end())
			{
				registers_.erase(iter);
			}
		}
	}

	std::string architecture::name() const
	{
		return name_;
	}
	std::string architecture::name(const std::string& new_name)
	{
		if (!locked_)
		{
			return name_ = new_name;
		}
		else
		{
			return name_;
		}
	}
	std::string architecture::author() const
	{
		return author_;
	}
	std::string architecture::author(const std::string& new_author)
	{
		if (!locked_)
		{
			return author_ = new_author;
		}
		else
		{
			return author_;
		}
	}
	std::uint64_t architecture::id() const noexcept
	{
		return id_;
	}
	std::uint64_t architecture::id(std::uint64_t new_id) noexcept
	{
		if (!locked_)
		{
			return id_ = new_id;
		}
		else
		{
			return id_;
		}
	}
	bool architecture::locked() const noexcept
	{
		return locked_;
	}
	bool architecture::locked(bool lock) noexcept
	{
		if (!locked_)
		{
			return locked_ = lock;
		}
		else
		{
			return locked_;
		}
	}
	std::vector<register_type::ptr> architecture::registers() const
	{
		return registers_;
	}
	const std::vector<register_type::ptr>& architecture::registers() noexcept
	{
		return registers_;
	}
}