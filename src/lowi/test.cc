#include <lowi/lowi.hh>

#include <iostream>
#include <string>

class rbx : public lowi::register_type
{
public:
	rbx()
		: register_type("rbx",
			8 +
			lowi::registers::rax::create()
			+ 8)
	{}
};

int main()
{
	rbx rbx;

	return 0;
}