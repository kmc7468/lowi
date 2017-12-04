#ifndef LOWI_HEADER_REGISTER_TYPE_HH
#define LOWI_HEADER_REGISTER_TYPE_HH

#include <lowi/register_map.hh>

#include <cstdint>
#include <memory>
#include <string>

namespace lowi
{
	class register_map;

	class register_type
	{
	public:
		using ptr = std::shared_ptr<register_type>;

	public:
		register_type() = delete;
		register_type(const register_type& register_type) = delete;
		register_type(register_type&& register_type) noexcept = delete;
		virtual ~register_type() = default;

	protected:
		register_type(const std::string& name, std::uint32_t size);

	public:
		register_type& operator=(const register_type& register_type) = delete;
		register_type& operator=(register_type&& register_type) noexcept = delete;
		bool operator==(const register_type& register_type) const;
		bool operator==(const ptr& register_type) const;
		bool operator!=(const register_type& register_type) const;
		bool operator!=(const ptr& register_type) const;

	public:
		bool equal(const register_type& register_type) const;
		bool equal(const ptr& register_type) const;

	public:
		std::string name() const;
		std::uint32_t size() const noexcept;

	private:
		std::string name_;
		register_map map_;
	};
}

#endif