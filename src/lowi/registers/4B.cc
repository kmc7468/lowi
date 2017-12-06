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

#include <lowi/registers/ax.hh>
#include <lowi/registers/bx.hh>
#include <lowi/registers/cx.hh>
#include <lowi/registers/dx.hh>
#include <lowi/registers/bp.hh>
#include <lowi/registers/sp.hh>
#include <lowi/registers/si.hh>
#include <lowi/registers/di.hh>
#include <lowi/registers/r8w.hh>
#include <lowi/registers/r9w.hh>
#include <lowi/registers/r10w.hh>
#include <lowi/registers/r11w.hh>
#include <lowi/registers/r12w.hh>
#include <lowi/registers/r13w.hh>
#include <lowi/registers/r14w.hh>
#include <lowi/registers/r15w.hh>

namespace lowi
{
	namespace registers
	{
		eax::eax()
			: register_type("eax", 2 + ax::create())
		{}

		bool eax::operator==(const eax& eax) const noexcept
		{
			return equal(eax);
		}
		bool eax::operator!=(const eax& eax) const noexcept
		{
			return !equal(eax);
		}

		eax& eax::assign(const eax&)
		{
			return *this;
		}
		eax& eax::assign(eax&&) noexcept
		{
			return *this;
		}
		bool eax::equal(const eax&) const noexcept
		{
			return true;
		}

		register_type::ptr eax::create()
		{
			return std::make_shared<eax>();
		}
	}

	namespace registers
	{
		ebx::ebx()
			: register_type("ebx", 2 + bx::create())
		{}

		bool ebx::operator==(const ebx& ebx) const noexcept
		{
			return equal(ebx);
		}
		bool ebx::operator!=(const ebx& ebx) const noexcept
		{
			return !equal(ebx);
		}

		ebx& ebx::assign(const ebx&)
		{
			return *this;
		}
		ebx& ebx::assign(ebx&&) noexcept
		{
			return *this;
		}
		bool ebx::equal(const ebx&) const noexcept
		{
			return true;
		}

		register_type::ptr ebx::create()
		{
			return std::make_shared<ebx>();
		}
	}

	namespace registers
	{
		ecx::ecx()
			: register_type("ecx", 2 + cx::create())
		{}

		bool ecx::operator==(const ecx& ecx) const noexcept
		{
			return equal(ecx);
		}
		bool ecx::operator!=(const ecx& ecx) const noexcept
		{
			return !equal(ecx);
		}

		ecx& ecx::assign(const ecx&)
		{
			return *this;
		}
		ecx& ecx::assign(ecx&&) noexcept
		{
			return *this;
		}
		bool ecx::equal(const ecx&) const noexcept
		{
			return true;
		}

		register_type::ptr ecx::create()
		{
			return std::make_shared<ecx>();
		}
	}

	namespace registers
	{
		edx::edx()
			: register_type("edx", 2 + dx::create())
		{}

		bool edx::operator==(const edx& edx) const noexcept
		{
			return equal(edx);
		}
		bool edx::operator!=(const edx& edx) const noexcept
		{
			return !equal(edx);
		}

		edx& edx::assign(const edx&)
		{
			return *this;
		}
		edx& edx::assign(edx&&) noexcept
		{
			return *this;
		}
		bool edx::equal(const edx&) const noexcept
		{
			return true;
		}

		register_type::ptr edx::create()
		{
			return std::make_shared<edx>();
		}
	}

	namespace registers
	{
		ebp::ebp()
			: register_type("ebp", 2 + bp::create())
		{}

		bool ebp::operator==(const ebp& ebp) const noexcept
		{
			return equal(ebp);
		}
		bool ebp::operator!=(const ebp& ebp) const noexcept
		{
			return !equal(ebp);
		}

		ebp& ebp::assign(const ebp&)
		{
			return *this;
		}
		ebp& ebp::assign(ebp&&) noexcept
		{
			return *this;
		}
		bool ebp::equal(const ebp&) const noexcept
		{
			return true;
		}

		register_type::ptr ebp::create()
		{
			return std::make_shared<ebp>();
		}
	}

	namespace registers
	{
		esp::esp()
			: register_type("esp", 2 + sp::create())
		{}

		bool esp::operator==(const esp& esp) const noexcept
		{
			return equal(esp);
		}
		bool esp::operator!=(const esp& esp) const noexcept
		{
			return !equal(esp);
		}

		esp& esp::assign(const esp&)
		{
			return *this;
		}
		esp& esp::assign(esp&&) noexcept
		{
			return *this;
		}
		bool esp::equal(const esp&) const noexcept
		{
			return true;
		}

		register_type::ptr esp::create()
		{
			return std::make_shared<esp>();
		}
	}

	namespace registers
	{
		esi::esi()
			: register_type("esi", 2 + si::create())
		{}

		bool esi::operator==(const esi& esi) const noexcept
		{
			return equal(esi);
		}
		bool esi::operator!=(const esi& esi) const noexcept
		{
			return !equal(esi);
		}

		esi& esi::assign(const esi&)
		{
			return *this;
		}
		esi& esi::assign(esi&&) noexcept
		{
			return *this;
		}
		bool esi::equal(const esi&) const noexcept
		{
			return true;
		}

		register_type::ptr esi::create()
		{
			return std::make_shared<esi>();
		}
	}

	namespace registers
	{
		edi::edi()
			: register_type("edi", 2 + di::create())
		{}

		bool edi::operator==(const edi& edi) const noexcept
		{
			return equal(edi);
		}
		bool edi::operator!=(const edi& edi) const noexcept
		{
			return !equal(edi);
		}

		edi& edi::assign(const edi&)
		{
			return *this;
		}
		edi& edi::assign(edi&&) noexcept
		{
			return *this;
		}
		bool edi::equal(const edi&) const noexcept
		{
			return true;
		}

		register_type::ptr edi::create()
		{
			return std::make_shared<edi>();
		}
	}

	namespace registers
	{
		r8d::r8d()
			: register_type("r8d", 2 + r8w::create())
		{}

		bool r8d::operator==(const r8d& r8d) const noexcept
		{
			return equal(r8d);
		}
		bool r8d::operator!=(const r8d& r8d) const noexcept
		{
			return !equal(r8d);
		}

		r8d& r8d::assign(const r8d&)
		{
			return *this;
		}
		r8d& r8d::assign(r8d&&) noexcept
		{
			return *this;
		}
		bool r8d::equal(const r8d&) const noexcept
		{
			return true;
		}

		register_type::ptr r8d::create()
		{
			return std::make_shared<r8d>();
		}
	}

	namespace registers
	{
		r9d::r9d()
			: register_type("r9d", 2 + r9w::create())
		{}

		bool r9d::operator==(const r9d& r9d) const noexcept
		{
			return equal(r9d);
		}
		bool r9d::operator!=(const r9d& r9d) const noexcept
		{
			return !equal(r9d);
		}

		r9d& r9d::assign(const r9d&)
		{
			return *this;
		}
		r9d& r9d::assign(r9d&&) noexcept
		{
			return *this;
		}
		bool r9d::equal(const r9d&) const noexcept
		{
			return true;
		}

		register_type::ptr r9d::create()
		{
			return std::make_shared<r9d>();
		}
	}

	namespace registers
	{
		r10d::r10d()
			: register_type("r10d", 2 + r10w::create())
		{}

		bool r10d::operator==(const r10d& r10d) const noexcept
		{
			return equal(r10d);
		}
		bool r10d::operator!=(const r10d& r10d) const noexcept
		{
			return !equal(r10d);
		}

		r10d& r10d::assign(const r10d&)
		{
			return *this;
		}
		r10d& r10d::assign(r10d&&) noexcept
		{
			return *this;
		}
		bool r10d::equal(const r10d&) const noexcept
		{
			return true;
		}

		register_type::ptr r10d::create()
		{
			return std::make_shared<r10d>();
		}
	}

	namespace registers
	{
		r11d::r11d()
			: register_type("r11d", 2 + r11w::create())
		{}

		bool r11d::operator==(const r11d& r11d) const noexcept
		{
			return equal(r11d);
		}
		bool r11d::operator!=(const r11d& r11d) const noexcept
		{
			return !equal(r11d);
		}

		r11d& r11d::assign(const r11d&)
		{
			return *this;
		}
		r11d& r11d::assign(r11d&&) noexcept
		{
			return *this;
		}
		bool r11d::equal(const r11d&) const noexcept
		{
			return true;
		}

		register_type::ptr r11d::create()
		{
			return std::make_shared<r11d>();
		}
	}

	namespace registers
	{
		r12d::r12d()
			: register_type("r12d", 2 + r12w::create())
		{}

		bool r12d::operator==(const r12d& r12d) const noexcept
		{
			return equal(r12d);
		}
		bool r12d::operator!=(const r12d& r12d) const noexcept
		{
			return !equal(r12d);
		}

		r12d& r12d::assign(const r12d&)
		{
			return *this;
		}
		r12d& r12d::assign(r12d&&) noexcept
		{
			return *this;
		}
		bool r12d::equal(const r12d&) const noexcept
		{
			return true;
		}

		register_type::ptr r12d::create()
		{
			return std::make_shared<r12d>();
		}
	}

	namespace registers
	{
		r13d::r13d()
			: register_type("r13d", 2 + r13w::create())
		{}

		bool r13d::operator==(const r13d& r13d) const noexcept
		{
			return equal(r13d);
		}
		bool r13d::operator!=(const r13d& r13d) const noexcept
		{
			return !equal(r13d);
		}

		r13d& r13d::assign(const r13d&)
		{
			return *this;
		}
		r13d& r13d::assign(r13d&&) noexcept
		{
			return *this;
		}
		bool r13d::equal(const r13d&) const noexcept
		{
			return true;
		}

		register_type::ptr r13d::create()
		{
			return std::make_shared<r13d>();
		}
	}

	namespace registers
	{
		r14d::r14d()
			: register_type("r14d", 2 + r14w::create())
		{}

		bool r14d::operator==(const r14d& r14d) const noexcept
		{
			return equal(r14d);
		}
		bool r14d::operator!=(const r14d& r14d) const noexcept
		{
			return !equal(r14d);
		}

		r14d& r14d::assign(const r14d&)
		{
			return *this;
		}
		r14d& r14d::assign(r14d&&) noexcept
		{
			return *this;
		}
		bool r14d::equal(const r14d&) const noexcept
		{
			return true;
		}

		register_type::ptr r14d::create()
		{
			return std::make_shared<r14d>();
		}
	}

	namespace registers
	{
		r15d::r15d()
			: register_type("r15d", 2 + r15w::create())
		{}

		bool r15d::operator==(const r15d& r15d) const noexcept
		{
			return equal(r15d);
		}
		bool r15d::operator!=(const r15d& r15d) const noexcept
		{
			return !equal(r15d);
		}

		r15d& r15d::assign(const r15d&)
		{
			return *this;
		}
		r15d& r15d::assign(r15d&&) noexcept
		{
			return *this;
		}
		bool r15d::equal(const r15d&) const noexcept
		{
			return true;
		}

		register_type::ptr r15d::create()
		{
			return std::make_shared<r15d>();
		}
	}
}