#ifndef LOWI_HEADER_INSTRUCTION_TYPE_HH
#define LOWI_HEADER_INSTRUCTION_TYPE_HH

#include <memory>

namespace lowi
{
	class instruction_type
	{
	public:
		using ptr = std::shared_ptr<instruction_type>;

	public:
		instruction_type() = delete;
		instruction_type(const instruction_type& instruction_type) = delete;
		instruction_type(instruction_type&& instruction_type) noexcept = delete;
		virtual ~instruction_type() = default;

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
	};
}

#endif