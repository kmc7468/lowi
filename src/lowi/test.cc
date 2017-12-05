#include <lowi/lowi.hh>

#include <iostream>
#include <string>

int main()
{
	lowi::registers::rax rax;
	lowi::registers::eax eax;
	lowi::registers::ax ax;
	lowi::registers::ah ah;
	lowi::registers::al al;

	std::cout << rax.size() << std::endl;
	std::cout << eax.size() << std::endl;
	std::cout << ax.size() << std::endl;
	std::cout << ah.size() << std::endl;
	std::cout << al.size() << std::endl;

	rax.map().dump();
	rax.map().dump(false);
	
	return 0;
}