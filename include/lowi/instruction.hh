#ifndef LOWI_HEADER_INSTRUCTION_HH
#define LOWI_HEADER_INSTRUCTION_HH

#include <lowi/instruction_type.hh>
#include <lowi/token.hh>

namespace lowi
{
	class instruction final
	{
	public:
		instruction(const token& token, const instruction_type::ptr& type);
		instruction(const instruction& instruction);
		instruction(instruction&& instruction) noexcept;
		~instruction() = default;

	public:
		instruction& operator=(const instruction& instruction);
		instruction& operator=(instruction&& instruction) noexcept;
		bool operator==(const instruction& instruction) const;
		bool operator!=(const instruction& instruction) const;

	public:
		instruction& assign(const instruction& instruction);
		instruction& assign(instruction&& instruction) noexcept;
		bool equal(const instruction& instruction) const;

	private:
		token token_;
		instruction_type::ptr type_;
	};
}

#endif