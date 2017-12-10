#include <lowi/architectures/x86_64.hh>

#include <lowi/registers.hh>

namespace lowi
{
	namespace architectures
	{
		x86_64::x86_64()
			: architecture("x86-64", "kmc7468", 1)
		{
			protected_registers() =
			{
				registers::rax::create(),
				registers::rbx::create(),
				registers::rcx::create(),
				registers::rdx::create(),
				registers::rbp::create(),
				registers::rsp::create(),
				registers::rsi::create(),
				registers::rdi::create(),
				registers::r8::create(),
				registers::r9::create(),
				registers::r10::create(),
				registers::r11::create(),
				registers::r12::create(),
				registers::r13::create(),
				registers::r14::create(),
				registers::r15::create(),
				registers::rflags::create(),

				registers::eax::create(),
				registers::ebx::create(),
				registers::ecx::create(),
				registers::edx::create(),
				registers::ebp::create(),
				registers::esp::create(),
				registers::esi::create(),
				registers::edi::create(),
				registers::r8d::create(),
				registers::r9d::create(),
				registers::r10d::create(),
				registers::r11d::create(),
				registers::r12d::create(),
				registers::r13d::create(),
				registers::r14d::create(),
				registers::r15d::create(),
				registers::eflags::create(),

				registers::ax::create(),
				registers::bx::create(),
				registers::cx::create(),
				registers::dx::create(),
				registers::bp::create(),
				registers::sp::create(),
				registers::si::create(),
				registers::di::create(),
				registers::r8w::create(),
				registers::r9w::create(),
				registers::r10w::create(),
				registers::r11w::create(),
				registers::r12w::create(),
				registers::r13w::create(),
				registers::r14w::create(),
				registers::r15w::create(),
				registers::cs::create(),
				registers::ds::create(),
				registers::es::create(),
				registers::fs::create(),
				registers::gs::create(),
				registers::flags::create(),

				registers::ah::create(),
				registers::al::create(),
				registers::bh::create(),
				registers::bl::create(),
				registers::ch::create(),
				registers::cl::create(),
				registers::dh::create(),
				registers::dl::create(),
				registers::r8l::create(),
				registers::r9l::create(),
				registers::r10l::create(),
				registers::r11l::create(),
				registers::r12l::create(),
				registers::r13l::create(),
				registers::r14l::create(),
				registers::r15l::create(),
			};
		}

		architecture::ptr x86_64::create()
		{
			static architecture::ptr instance = nullptr;

			if (instance == nullptr)
			{
				instance = std::make_shared<x86_64>();
			}

			return instance;
		}
	}
}