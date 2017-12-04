#ifndef LOWI_HEADER_REGISTER_MAP_HH
#define LOWI_HEADER_REGISTER_MAP_HH

#include <cstddef>
#include <memory>
#include <vector>

namespace lowi
{
	class register_map;
	class register_type;

	class register_map_item_basic;
	class register_map_item_register;

	class register_map_item
	{
	public:
		using ptr = std::shared_ptr<register_map_item>;
		using basic = register_map_item_basic;
		using register_ = register_map_item_register;

	public:
		register_map_item(const register_map_item& map_item) = delete;
		register_map_item(register_map_item&& map_item) noexcept = delete;
		virtual ~register_map_item() = default;

	protected:
		register_map_item() = default;

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
		virtual std::uint32_t size() const = 0;
	};

	class register_map_item_basic final : public register_map_item
	{
	public:
		register_map_item_basic() noexcept;
		register_map_item_basic(std::uint32_t size) noexcept;
		register_map_item_basic(const register_map_item_basic& map_item) noexcept;
		register_map_item_basic(register_map_item_basic&& map_item) noexcept;
		virtual ~register_map_item_basic() override = default;
	
	public:
		register_map_item_basic& operator=(const register_map_item_basic& map_item) = delete;
		register_map_item_basic& operator=(register_map_item_basic&& map_item) noexcept = delete;
		bool operator==(const register_map_item_basic& map_item) const noexcept;
		bool operator!=(const register_map_item_basic& map_item) const noexcept;
		register_map_item_basic operator+(const register_map_item_basic& map_item) const;
		register_map operator+(const register_map_item_register& map_item) const;

	public:
		virtual bool equal(const register_map_item& map_item) const override;
		bool equal(const register_map_item_basic& map_item) const;

	public:
		virtual std::uint32_t size() const override;

	private:
		std::uint32_t size_;
	};

	class register_map_item_register final : public register_map_item
	{
	public:
		register_map_item_register(const std::shared_ptr<register_type>& register_type);
		register_map_item_register(const register_map_item_register& map_item);
		register_map_item_register(register_map_item_register&& map_item) noexcept;
		virtual ~register_map_item_register() override = default;

	public:
		register_map_item_register& operator=(const register_map_item_register& map_item) = delete;
		register_map_item_register& operator=(register_map_item_register&& map_item) noexcept = delete;
		bool operator==(const register_map_item_register& map_item) const;
		bool operator!=(const register_map_item_register& map_item) const;
		register_map operator+(const register_map_item_register& map_item) const;
		register_map operator+(const register_map_item_basic& map_item) const;

	public:
		virtual bool equal(const register_map_item& map_item) const override;
		bool equal(const register_map_item_register& map_item);

	public:
		virtual std::uint32_t size() const override;
		std::shared_ptr<register_type> register_type() const;

	private:
		std::shared_ptr<lowi::register_type> register_type_;
	};

	class register_map final
	{
	public:
		register_map(std::uint32_t size);
		register_map(const register_map_item_basic& item);
		register_map(const register_map_item_register& item);
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
		register_map_item::ptr operator[](std::uint32_t offset);
		register_map operator+(const register_map& map) const;

	public:
		register_map& assign(const register_map& map);
		register_map& assign(register_map&& map) noexcept;
		bool equal(const register_map& map) const;
		register_map_item::ptr at(std::uint32_t offset);

	public:
		std::uint32_t size() const;

	private:
		std::vector<register_map_item::ptr> map_;

	public:
		static const register_map empty;
	};
}

#endif