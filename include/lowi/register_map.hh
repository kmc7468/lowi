#ifndef LOWI_HEADER_REGISTER_MAP_HH
#define LOWI_HEADER_REGISTER_MAP_HH

#include <memory>
#include <vector>

namespace lowi
{
	class register_map_item
	{
	public:
		using ptr = std::shared_ptr<register_map_item>;

	public:
		register_map_item() = delete;
		register_map_item(const register_map_item& map_item) = delete;
		register_map_item(register_map_item&& map_item) noexcept = delete;
		virtual ~register_map_item() = default;

	public:
		register_map_item& operator=(const register_map_item& map_item) = delete;
		register_map_item& operator=(register_map_item&& map_item) noexcept = delete;
		bool operator==(const register_map_item& map_item) const;
		bool operator==(const ptr& map_item) const;
		bool operator!=(const register_map_item& map_item) const;
		bool operator!=(const ptr& map_item) const;

	public:
		virtual bool equal(const register_map_item& map_item) const = 0;
		bool equal(const ptr& map_item) const;

	public:
		virtual std::size_t size() const = 0;
	};

	class register_map final
	{
	public:
		register_map(const std::vector<register_map_item::ptr>& map);
		register_map(const register_map& map);
		register_map(register_map&& map) noexcept;
		~register_map() = default;

	private:
		register_map() = default;

	public:
		register_map& operator=(const register_map& map);
		register_map& operator=(register_map&& map) noexcept;
		bool operator==(const register_map& map) const;
		bool operator!=(const register_map& map) const;
		register_map_item::ptr operator[](std::size_t offset);

	public:
		register_map& assign(const register_map& map);
		register_map& assign(register_map&& map) noexcept;
		bool equal(const register_map& map) const;
		register_map_item::ptr at(std::size_t offset);

	private:
		std::vector<register_map_item::ptr> map_;

	public:
		static const register_map empty;
	};
}

#endif