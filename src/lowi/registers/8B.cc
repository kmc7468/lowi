#include <lowi/registers/rax.hh>
#include <lowi/registers/rbx.hh>
#include <lowi/registers/rcx.hh>
#include <lowi/registers/rdx.hh>
#include <lowi/registers/rbp.hh>
#include <lowi/registers/rsp.hh>
#include <lowi/registers/rsi.hh>
#include <lowi/registers/rdi.hh>
#include <lowi/registers/r8.hh>
#include <lowi/registers/r9.hh>
#include <lowi/registers/r10.hh>
#include <lowi/registers/r11.hh>
#include <lowi/registers/r12.hh>
#include <lowi/registers/r13.hh>
#include <lowi/registers/r14.hh>
#include <lowi/registers/r15.hh>
#include <lowi/registers/rflags.hh>

#include <lowi/registers/eax.hh>
#include <lowi/registers/ebx.hh>
#include <lowi/registers/ecx.hh>
#include <lowi/registers/edx.hh>
#include <lowi/registers/ebp.hh>
#include <lowi/registers/esp.hh>
#include <lowi/registers/esi.hh>
#include <lowi/registers/edi.hh>
#include <lowi/registers/r8d.hh>
#include <lowi/registers/r9d.hh>
#include <lowi/registers/r10d.hh>
#include <lowi/registers/r11d.hh>
#include <lowi/registers/r12d.hh>
#include <lowi/registers/r13d.hh>
#include <lowi/registers/r14d.hh>
#include <lowi/registers/r15d.hh>
#include <lowi/registers/eflags.hh>

namespace lowi
{
	namespace registers
	{
		rax::rax()
			: register_type("rax", register_category::general_register, 4 + eax::create())
		{}

		bool rax::operator==(const rax& rax) const noexcept
		{
			return equal(rax);
		}
		bool rax::operator!=(const rax& rax) const noexcept
		{
			return !equal(rax);
		}

		rax& rax::assign(const rax&)
		{
			return *this;
		}
		rax& rax::assign(rax&&) noexcept
		{
			return *this;
		}
		bool rax::equal(const rax&) const noexcept
		{
			return true;
		}

		register_type::ptr rax::create()
		{
			static register_type::ptr instance = nullptr;

			if (instance == nullptr)
			{
				instance = std::make_shared<rax>();
			}

			return instance;
		}
	}

	namespace registers
	{
		rbx::rbx()
			: register_type("rbx", register_category::general_register, 4 + ebx::create())
		{}

		bool rbx::operator==(const rbx& rbx) const noexcept
		{
			return equal(rbx);
		}
		bool rbx::operator!=(const rbx& rbx) const noexcept
		{
			return !equal(rbx);
		}

		rbx& rbx::assign(const rbx&)
		{
			return *this;
		}
		rbx& rbx::assign(rbx&&) noexcept
		{
			return *this;
		}
		bool rbx::equal(const rbx&) const noexcept
		{
			return true;
		}

		register_type::ptr rbx::create()
		{
			static register_type::ptr instance = nullptr;

			if (instance == nullptr)
			{
				instance = std::make_shared<rbx>();
			}

			return instance;
		}
	}

	namespace registers
	{
		rcx::rcx()
			: register_type("rcx", register_category::general_register, 4 + ecx::create())
		{}

		bool rcx::operator==(const rcx& rcx) const noexcept
		{
			return equal(rcx);
		}
		bool rcx::operator!=(const rcx& rcx) const noexcept
		{
			return !equal(rcx);
		}

		rcx& rcx::assign(const rcx&)
		{
			return *this;
		}
		rcx& rcx::assign(rcx&&) noexcept
		{
			return *this;
		}
		bool rcx::equal(const rcx&) const noexcept
		{
			return true;
		}

		register_type::ptr rcx::create()
		{
			static register_type::ptr instance = nullptr;

			if (instance == nullptr)
			{
				instance = std::make_shared<rcx>();
			}

			return instance;
		}
	}

	namespace registers
	{
		rdx::rdx()
			: register_type("rdx", register_category::general_register, 4 + edx::create())
		{}

		bool rdx::operator==(const rdx& rdx) const noexcept
		{
			return equal(rdx);
		}
		bool rdx::operator!=(const rdx& rdx) const noexcept
		{
			return !equal(rdx);
		}

		rdx& rdx::assign(const rdx&)
		{
			return *this;
		}
		rdx& rdx::assign(rdx&&) noexcept
		{
			return *this;
		}
		bool rdx::equal(const rdx&) const noexcept
		{
			return true;
		}

		register_type::ptr rdx::create()
		{
			static register_type::ptr instance = nullptr;

			if (instance == nullptr)
			{
				instance = std::make_shared<rdx>();
			}

			return instance;
		}
	}

	namespace registers
	{
		rbp::rbp()
			: register_type("rbp", register_category::general_register, 4 + ebp::create())
		{}

		bool rbp::operator==(const rbp& rbp) const noexcept
		{
			return equal(rbp);
		}
		bool rbp::operator!=(const rbp& rbp) const noexcept
		{
			return !equal(rbp);
		}

		rbp& rbp::assign(const rbp&)
		{
			return *this;
		}
		rbp& rbp::assign(rbp&&) noexcept
		{
			return *this;
		}
		bool rbp::equal(const rbp&) const noexcept
		{
			return true;
		}

		register_type::ptr rbp::create()
		{
			static register_type::ptr instance = nullptr;

			if (instance == nullptr)
			{
				instance = std::make_shared<rbp>();
			}

			return instance;
		}
	}

	namespace registers
	{
		rsp::rsp()
			: register_type("rsp", register_category::general_register, 4 + esp::create())
		{}

		bool rsp::operator==(const rsp& rsp) const noexcept
		{
			return equal(rsp);
		}
		bool rsp::operator!=(const rsp& rsp) const noexcept
		{
			return !equal(rsp);
		}

		rsp& rsp::assign(const rsp&)
		{
			return *this;
		}
		rsp& rsp::assign(rsp&&) noexcept
		{
			return *this;
		}
		bool rsp::equal(const rsp&) const noexcept
		{
			return true;
		}

		register_type::ptr rsp::create()
		{
			static register_type::ptr instance = nullptr;

			if (instance == nullptr)
			{
				instance = std::make_shared<rsp>();
			}

			return instance;
		}
	}

	namespace registers
	{
		rsi::rsi()
			: register_type("rsi", register_category::general_register, 4 + esi::create())
		{}

		bool rsi::operator==(const rsi& rsi) const noexcept
		{
			return equal(rsi);
		}
		bool rsi::operator!=(const rsi& rsi) const noexcept
		{
			return !equal(rsi);
		}

		rsi& rsi::assign(const rsi&)
		{
			return *this;
		}
		rsi& rsi::assign(rsi&&) noexcept
		{
			return *this;
		}
		bool rsi::equal(const rsi&) const noexcept
		{
			return true;
		}

		register_type::ptr rsi::create()
		{
			static register_type::ptr instance = nullptr;

			if (instance == nullptr)
			{
				instance = std::make_shared<rsi>();
			}

			return instance;
		}
	}

	namespace registers
	{
		rdi::rdi()
			: register_type("rdi", register_category::general_register, 4 + edi::create())
		{}

		bool rdi::operator==(const rdi& rdi) const noexcept
		{
			return equal(rdi);
		}
		bool rdi::operator!=(const rdi& rdi) const noexcept
		{
			return !equal(rdi);
		}

		rdi& rdi::assign(const rdi&)
		{
			return *this;
		}
		rdi& rdi::assign(rdi&&) noexcept
		{
			return *this;
		}
		bool rdi::equal(const rdi&) const noexcept
		{
			return true;
		}

		register_type::ptr rdi::create()
		{
			static register_type::ptr instance = nullptr;

			if (instance == nullptr)
			{
				instance = std::make_shared<rdi>();
			}

			return instance;
		}
	}

	namespace registers
	{
		r8::r8()
			: register_type("r8", register_category::general_register, 4 + r8d::create())
		{}

		bool r8::operator==(const r8& r8) const noexcept
		{
			return equal(r8);
		}
		bool r8::operator!=(const r8& r8) const noexcept
		{
			return !equal(r8);
		}

		r8& r8::assign(const r8&)
		{
			return *this;
		}
		r8& r8::assign(r8&&) noexcept
		{
			return *this;
		}
		bool r8::equal(const r8&) const noexcept
		{
			return true;
		}

		register_type::ptr r8::create()
		{
			static register_type::ptr instance = nullptr;

			if (instance == nullptr)
			{
				instance = std::make_shared<r8>();
			}

			return instance;
		}
	}

	namespace registers
	{
		r9::r9()
			: register_type("r9", register_category::general_register, 4 + r9d::create())
		{}

		bool r9::operator==(const r9& r9) const noexcept
		{
			return equal(r9);
		}
		bool r9::operator!=(const r9& r9) const noexcept
		{
			return !equal(r9);
		}

		r9& r9::assign(const r9&)
		{
			return *this;
		}
		r9& r9::assign(r9&&) noexcept
		{
			return *this;
		}
		bool r9::equal(const r9&) const noexcept
		{
			return true;
		}

		register_type::ptr r9::create()
		{
			static register_type::ptr instance = nullptr;

			if (instance == nullptr)
			{
				instance = std::make_shared<r9>();
			}

			return instance;
		}
	}

	namespace registers
	{
		r10::r10()
			: register_type("r10", register_category::general_register, 4 + r10d::create())
		{}

		bool r10::operator==(const r10& r10) const noexcept
		{
			return equal(r10);
		}
		bool r10::operator!=(const r10& r10) const noexcept
		{
			return !equal(r10);
		}

		r10& r10::assign(const r10&)
		{
			return *this;
		}
		r10& r10::assign(r10&&) noexcept
		{
			return *this;
		}
		bool r10::equal(const r10&) const noexcept
		{
			return true;
		}

		register_type::ptr r10::create()
		{
			static register_type::ptr instance = nullptr;

			if (instance == nullptr)
			{
				instance = std::make_shared<r10>();
			}

			return instance;
		}
	}

	namespace registers
	{
		r11::r11()
			: register_type("r11", register_category::general_register, 4 + r11d::create())
		{}

		bool r11::operator==(const r11& r11) const noexcept
		{
			return equal(r11);
		}
		bool r11::operator!=(const r11& r11) const noexcept
		{
			return !equal(r11);
		}

		r11& r11::assign(const r11&)
		{
			return *this;
		}
		r11& r11::assign(r11&&) noexcept
		{
			return *this;
		}
		bool r11::equal(const r11&) const noexcept
		{
			return true;
		}

		register_type::ptr r11::create()
		{
			static register_type::ptr instance = nullptr;

			if (instance == nullptr)
			{
				instance = std::make_shared<r11>();
			}

			return instance;
		}
	}

	namespace registers
	{
		r12::r12()
			: register_type("r12", register_category::general_register, 4 + r12d::create())
		{}

		bool r12::operator==(const r12& r12) const noexcept
		{
			return equal(r12);
		}
		bool r12::operator!=(const r12& r12) const noexcept
		{
			return !equal(r12);
		}

		r12& r12::assign(const r12&)
		{
			return *this;
		}
		r12& r12::assign(r12&&) noexcept
		{
			return *this;
		}
		bool r12::equal(const r12&) const noexcept
		{
			return true;
		}

		register_type::ptr r12::create()
		{
			static register_type::ptr instance = nullptr;

			if (instance == nullptr)
			{
				instance = std::make_shared<r12>();
			}

			return instance;
		}
	}

	namespace registers
	{
		r13::r13()
			: register_type("r13", register_category::general_register, 4 + r13d::create())
		{}

		bool r13::operator==(const r13& r13) const noexcept
		{
			return equal(r13);
		}
		bool r13::operator!=(const r13& r13) const noexcept
		{
			return !equal(r13);
		}

		r13& r13::assign(const r13&)
		{
			return *this;
		}
		r13& r13::assign(r13&&) noexcept
		{
			return *this;
		}
		bool r13::equal(const r13&) const noexcept
		{
			return true;
		}

		register_type::ptr r13::create()
		{
			static register_type::ptr instance = nullptr;

			if (instance == nullptr)
			{
				instance = std::make_shared<r13>();
			}

			return instance;
		}
	}

	namespace registers
	{
		r14::r14()
			: register_type("r14", register_category::general_register, 4 + r14d::create())
		{}

		bool r14::operator==(const r14& r14) const noexcept
		{
			return equal(r14);
		}
		bool r14::operator!=(const r14& r14) const noexcept
		{
			return !equal(r14);
		}

		r14& r14::assign(const r14&)
		{
			return *this;
		}
		r14& r14::assign(r14&&) noexcept
		{
			return *this;
		}
		bool r14::equal(const r14&) const noexcept
		{
			return true;
		}

		register_type::ptr r14::create()
		{
			static register_type::ptr instance = nullptr;

			if (instance == nullptr)
			{
				instance = std::make_shared<r14>();
			}

			return instance;
		}
	}

	namespace registers
	{
		r15::r15()
			: register_type("r15", register_category::general_register, 4 + r15d::create())
		{}

		bool r15::operator==(const r15& r15) const noexcept
		{
			return equal(r15);
		}
		bool r15::operator!=(const r15& r15) const noexcept
		{
			return !equal(r15);
		}

		r15& r15::assign(const r15&)
		{
			return *this;
		}
		r15& r15::assign(r15&&) noexcept
		{
			return *this;
		}
		bool r15::equal(const r15&) const noexcept
		{
			return true;
		}

		register_type::ptr r15::create()
		{
			static register_type::ptr instance = nullptr;

			if (instance == nullptr)
			{
				instance = std::make_shared<r15>();
			}

			return instance;
		}
	}

	namespace registers
	{
		rflags::rflags()
			: register_type("rflags", register_category::flag_register, 4 + eflags::create())
		{}

		bool rflags::operator==(const rflags& rflags) const noexcept
		{
			return equal(rflags);
		}
		bool rflags::operator!=(const rflags& rflags) const noexcept
		{
			return !equal(rflags);
		}

		rflags& rflags::assign(const rflags&)
		{
			return *this;
		}
		rflags& rflags::assign(rflags&&) noexcept
		{
			return *this;
		}
		bool rflags::equal(const rflags&) const noexcept
		{
			return true;
		}

		register_type::ptr rflags::create()
		{
			static register_type::ptr instance = nullptr;

			if (instance == nullptr)
			{
				instance = std::make_shared<rflags>();
			}

			return instance;
		}
	}
}