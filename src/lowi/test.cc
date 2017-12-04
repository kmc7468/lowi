#include <lowi/lowi.hh>

#include <iostream>
#include <string>

class rbx : public lowi::register_type
{
public:
	rbx()
		: register_type("rbx",
			lowi::register_map_item_basic(8) +
			lowi::register_map_item_register(std::make_shared<lowi::registers::rax>()))
	{}
};

int main()
{
	rbx rbx;

	return 0;
}