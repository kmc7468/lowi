#ifndef LOWI_HEADER_OPERAND_HH
#define LOWI_HEADER_OPERAND_HH

#include <lowi/token.hh>

namespace lowi
{
	enum class operand_type
	{
		expression = 0b001,
		register_ = 0b010,
		pointer_operand = 0b100,

		register_with_expression = register_ | expression,
		pointer_operand_with_expression = pointer_operand | expression,
	};
}

#endif