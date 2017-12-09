#ifndef LOWI_HEADER_REGISTER_TYPE_HH
#define LOWI_HEADER_REGISTER_TYPE_HH

#include <lowi/register_map.hh>

#include <cstdint>
#include <memory>
#include <string>

namespace lowi
{
	enum class register_category
	{
		general_register,
		segment_register,
		flag_register,
		control_register,
		debug_register,
		instruction_register,
		table_register,
	};

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
		register_type(const std::string& name, register_category category, std::uint32_t size);
		register_type(const std::string& name, register_category category, const register_map& map);

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
		template<typename Ty_>
		static ptr create()
		{
			return Ty_::create();
		}

	public:
		std::uint32_t size() const noexcept;

	public:
		std::string name() const;
		register_map map() const;
		register_category category() const noexcept;

	private:
		std::string name_;
		register_map map_;
		register_category category_;
	};
}

#endif