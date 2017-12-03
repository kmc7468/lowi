#ifndef LOWI_HEADER_INSTRUCTION_TYPE_HH
#define LOWI_HEADER_INSTRUCTION_TYPE_HH

#include <cstdint>
#include <memory>
#include <string>
#include <vector>

namespace lowi
{
	class instruction_type_set;

	class instruction_type
	{
	public:
		using ptr = std::shared_ptr<instruction_type>;

	public:
		instruction_type() = delete;
		instruction_type(const instruction_type& instruction_type) = delete;
		instruction_type(instruction_type&& instruction_type) noexcept = delete;
		virtual ~instruction_type() = default;

	protected:
		instruction_type(const std::string& name, std::uint64_t number_of_operands);

	public:
		instruction_type& operator=(const instruction_type& instruction_type) = delete;
		instruction_type& operator=(instruction_type&& instruction_type) noexcept = delete;
		bool operator==(const instruction_type& instruction_type) const;
		bool operator==(const ptr& instruction_type) const;
		bool operator!=(const instruction_type& instruction_type) const;
		bool operator!=(const ptr& instruction_type) const;

	public:
		virtual bool equal(const instruction_type& instruction_type) const = 0;
		bool equal(const ptr& instruction_type) const;
	
	public:
		std::string name() const;
		std::uint64_t number_of_operands() const noexcept;

	private:
		std::string name_;
		std::uint64_t number_of_operands_;
	};

	class instruction_type_set final
	{
	public:
		using ptr = std::shared_ptr<instruction_type_set>;

	public:
		instruction_type_set() = default;
		instruction_type_set(const instruction_type_set& instruction_type);
		instruction_type_set(instruction_type_set&& instruction_type) noexcept;
		~instruction_type_set() = default;

	public:
		instruction_type_set& operator=(const instruction_type_set& instruction_type);
		instruction_type_set& operator=(instruction_type_set&& instruction_type) noexcept;
		bool operator==(const instruction_type_set& instruction_type) const;
		bool operator==(const ptr& instruction_type) const;
		bool operator!=(const instruction_type_set& instruction_type) const;
		bool operator!=(const ptr& instruction_type) const;

	public:
		instruction_type_set& assign(const instruction_type_set& instruction_type);
		instruction_type_set& assign(instruction_type_set&& instruction_type) noexcept;
		bool equal(const instruction_type_set& instruction_type) const;
		bool equal(const ptr& instruction_type) const;

	public:
		std::string name() const;
		std::string name(const std::string& new_name);

	private:
		std::string name_;
		std::vector<instruction_type::ptr> instruction_types_;
	};
}

#endif