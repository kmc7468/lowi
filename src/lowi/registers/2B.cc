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
#include <lowi/registers/cs.hh>
#include <lowi/registers/ds.hh>
#include <lowi/registers/es.hh>
#include <lowi/registers/fs.hh>
#include <lowi/registers/gs.hh>

#include <lowi/registers/ah.hh>
#include <lowi/registers/al.hh>
#include <lowi/registers/bh.hh>
#include <lowi/registers/bl.hh>
#include <lowi/registers/ch.hh>
#include <lowi/registers/cl.hh>
#include <lowi/registers/dh.hh>
#include <lowi/registers/dl.hh>
#include <lowi/registers/r8l.hh>
#include <lowi/registers/r9l.hh>
#include <lowi/registers/r10l.hh>
#include <lowi/registers/r11l.hh>
#include <lowi/registers/r12l.hh>
#include <lowi/registers/r13l.hh>
#include <lowi/registers/r14l.hh>
#include <lowi/registers/r15l.hh>

namespace lowi
{
	namespace registers
	{
		ax::ax()
			: register_type("ax", register_category::general_register, ah::create() + al::create())
		{}

		bool ax::operator==(const ax& ax) const noexcept
		{
			return equal(ax);
		}
		bool ax::operator!=(const ax& ax) const noexcept
		{
			return !equal(ax);
		}

		ax& ax::assign(const ax&)
		{
			return *this;
		}
		ax& ax::assign(ax&&) noexcept
		{
			return *this;
		}
		bool ax::equal(const ax&) const noexcept
		{
			return true;
		}

		register_type::ptr ax::create()
		{
			return std::make_shared<ax>();
		}
	}

	namespace registers
	{
		bx::bx()
			: register_type("bx", register_category::general_register, bh::create() + bl::create())
		{}

		bool bx::operator==(const bx& bx) const noexcept
		{
			return equal(bx);
		}
		bool bx::operator!=(const bx& bx) const noexcept
		{
			return !equal(bx);
		}

		bx& bx::assign(const bx&)
		{
			return *this;
		}
		bx& bx::assign(bx&&) noexcept
		{
			return *this;
		}
		bool bx::equal(const bx&) const noexcept
		{
			return true;
		}

		register_type::ptr bx::create()
		{
			return std::make_shared<bx>();
		}
	}

	namespace registers
	{
		cx::cx()
			: register_type("cx", register_category::general_register, ch::create() + cl::create())
		{}

		bool cx::operator==(const cx& cx) const noexcept
		{
			return equal(cx);
		}
		bool cx::operator!=(const cx& cx) const noexcept
		{
			return !equal(cx);
		}

		cx& cx::assign(const cx&)
		{
			return *this;
		}
		cx& cx::assign(cx&&) noexcept
		{
			return *this;
		}
		bool cx::equal(const cx&) const noexcept
		{
			return true;
		}

		register_type::ptr cx::create()
		{
			return std::make_shared<cx>();
		}
	}

	namespace registers
	{
		dx::dx()
			: register_type("dx", register_category::general_register, dh::create() + dl::create())
		{}

		bool dx::operator==(const dx& dx) const noexcept
		{
			return equal(dx);
		}
		bool dx::operator!=(const dx& dx) const noexcept
		{
			return !equal(dx);
		}

		dx& dx::assign(const dx&)
		{
			return *this;
		}
		dx& dx::assign(dx&&) noexcept
		{
			return *this;
		}
		bool dx::equal(const dx&) const noexcept
		{
			return true;
		}

		register_type::ptr dx::create()
		{
			return std::make_shared<dx>();
		}
	}

	namespace registers
	{
		bp::bp()
			: register_type("bp", register_category::general_register, 2)
		{}

		bool bp::operator==(const bp& bp) const noexcept
		{
			return equal(bp);
		}
		bool bp::operator!=(const bp& bp) const noexcept
		{
			return !equal(bp);
		}

		bp& bp::assign(const bp&)
		{
			return *this;
		}
		bp& bp::assign(bp&&) noexcept
		{
			return *this;
		}
		bool bp::equal(const bp&) const noexcept
		{
			return true;
		}

		register_type::ptr bp::create()
		{
			return std::make_shared<bp>();
		}
	}

	namespace registers
	{
		sp::sp()
			: register_type("sp", register_category::general_register, 2)
		{}

		bool sp::operator==(const sp& sp) const noexcept
		{
			return equal(sp);
		}
		bool sp::operator!=(const sp& sp) const noexcept
		{
			return !equal(sp);
		}

		sp& sp::assign(const sp&)
		{
			return *this;
		}
		sp& sp::assign(sp&&) noexcept
		{
			return *this;
		}
		bool sp::equal(const sp&) const noexcept
		{
			return true;
		}

		register_type::ptr sp::create()
		{
			return std::make_shared<sp>();
		}
	}

	namespace registers
	{
		si::si()
			: register_type("si", register_category::general_register, 2)
		{}

		bool si::operator==(const si& si) const noexcept
		{
			return equal(si);
		}
		bool si::operator!=(const si& si) const noexcept
		{
			return !equal(si);
		}

		si& si::assign(const si&)
		{
			return *this;
		}
		si& si::assign(si&&) noexcept
		{
			return *this;
		}
		bool si::equal(const si&) const noexcept
		{
			return true;
		}

		register_type::ptr si::create()
		{
			return std::make_shared<si>();
		}
	}

	namespace registers
	{
		di::di()
			: register_type("di", register_category::general_register, 2)
		{}

		bool di::operator==(const di& di) const noexcept
		{
			return equal(di);
		}
		bool di::operator!=(const di& di) const noexcept
		{
			return !equal(di);
		}

		di& di::assign(const di&)
		{
			return *this;
		}
		di& di::assign(di&&) noexcept
		{
			return *this;
		}
		bool di::equal(const di&) const noexcept
		{
			return true;
		}

		register_type::ptr di::create()
		{
			return std::make_shared<di>();
		}
	}

	namespace registers
	{
		r8w::r8w()
			: register_type("r8w", register_category::general_register, 1 + r8l::create())
		{}

		bool r8w::operator==(const r8w& r8w) const noexcept
		{
			return equal(r8w);
		}
		bool r8w::operator!=(const r8w& r8w) const noexcept
		{
			return !equal(r8w);
		}

		r8w& r8w::assign(const r8w&)
		{
			return *this;
		}
		r8w& r8w::assign(r8w&&) noexcept
		{
			return *this;
		}
		bool r8w::equal(const r8w&) const noexcept
		{
			return true;
		}

		register_type::ptr r8w::create()
		{
			return std::make_shared<r8w>();
		}
	}

	namespace registers
	{
		r9w::r9w()
			: register_type("r9w", register_category::general_register, 1 + r9l::create())
		{}

		bool r9w::operator==(const r9w& r9w) const noexcept
		{
			return equal(r9w);
		}
		bool r9w::operator!=(const r9w& r9w) const noexcept
		{
			return !equal(r9w);
		}

		r9w& r9w::assign(const r9w&)
		{
			return *this;
		}
		r9w& r9w::assign(r9w&&) noexcept
		{
			return *this;
		}
		bool r9w::equal(const r9w&) const noexcept
		{
			return true;
		}

		register_type::ptr r9w::create()
		{
			return std::make_shared<r9w>();
		}
	}

	namespace registers
	{
		r10w::r10w()
			: register_type("r10w", register_category::general_register, 1 + r10l::create())
		{}

		bool r10w::operator==(const r10w& r10w) const noexcept
		{
			return equal(r10w);
		}
		bool r10w::operator!=(const r10w& r10w) const noexcept
		{
			return !equal(r10w);
		}

		r10w& r10w::assign(const r10w&)
		{
			return *this;
		}
		r10w& r10w::assign(r10w&&) noexcept
		{
			return *this;
		}
		bool r10w::equal(const r10w&) const noexcept
		{
			return true;
		}

		register_type::ptr r10w::create()
		{
			return std::make_shared<r10w>();
		}
	}

	namespace registers
	{
		r11w::r11w()
			: register_type("r11w", register_category::general_register, 1 + r11l::create())
		{}

		bool r11w::operator==(const r11w& r11w) const noexcept
		{
			return equal(r11w);
		}
		bool r11w::operator!=(const r11w& r11w) const noexcept
		{
			return !equal(r11w);
		}

		r11w& r11w::assign(const r11w&)
		{
			return *this;
		}
		r11w& r11w::assign(r11w&&) noexcept
		{
			return *this;
		}
		bool r11w::equal(const r11w&) const noexcept
		{
			return true;
		}

		register_type::ptr r11w::create()
		{
			return std::make_shared<r11w>();
		}
	}

	namespace registers
	{
		r12w::r12w()
			: register_type("r12w", register_category::general_register, 1 + r12l::create())
		{}

		bool r12w::operator==(const r12w& r12w) const noexcept
		{
			return equal(r12w);
		}
		bool r12w::operator!=(const r12w& r12w) const noexcept
		{
			return !equal(r12w);
		}

		r12w& r12w::assign(const r12w&)
		{
			return *this;
		}
		r12w& r12w::assign(r12w&&) noexcept
		{
			return *this;
		}
		bool r12w::equal(const r12w&) const noexcept
		{
			return true;
		}

		register_type::ptr r12w::create()
		{
			return std::make_shared<r12w>();
		}
	}

	namespace registers
	{
		r13w::r13w()
			: register_type("r13w", register_category::general_register, 1 + r13l::create())
		{}

		bool r13w::operator==(const r13w& r13w) const noexcept
		{
			return equal(r13w);
		}
		bool r13w::operator!=(const r13w& r13w) const noexcept
		{
			return !equal(r13w);
		}

		r13w& r13w::assign(const r13w&)
		{
			return *this;
		}
		r13w& r13w::assign(r13w&&) noexcept
		{
			return *this;
		}
		bool r13w::equal(const r13w&) const noexcept
		{
			return true;
		}

		register_type::ptr r13w::create()
		{
			return std::make_shared<r13w>();
		}
	}

	namespace registers
	{
		r14w::r14w()
			: register_type("r14w", register_category::general_register, 1 + r14l::create())
		{}

		bool r14w::operator==(const r14w& r14w) const noexcept
		{
			return equal(r14w);
		}
		bool r14w::operator!=(const r14w& r14w) const noexcept
		{
			return !equal(r14w);
		}

		r14w& r14w::assign(const r14w&)
		{
			return *this;
		}
		r14w& r14w::assign(r14w&&) noexcept
		{
			return *this;
		}
		bool r14w::equal(const r14w&) const noexcept
		{
			return true;
		}

		register_type::ptr r14w::create()
		{
			return std::make_shared<r14w>();
		}
	}

	namespace registers
	{
		r15w::r15w()
			: register_type("r15w", register_category::general_register, 1 + r15l::create())
		{}

		bool r15w::operator==(const r15w& r15w) const noexcept
		{
			return equal(r15w);
		}
		bool r15w::operator!=(const r15w& r15w) const noexcept
		{
			return !equal(r15w);
		}

		r15w& r15w::assign(const r15w&)
		{
			return *this;
		}
		r15w& r15w::assign(r15w&&) noexcept
		{
			return *this;
		}
		bool r15w::equal(const r15w&) const noexcept
		{
			return true;
		}

		register_type::ptr r15w::create()
		{
			return std::make_shared<r15w>();
		}
	}

	namespace registers
	{
		cs::cs()
			: register_type("cs", register_category::segment_register, 2)
		{}

		bool cs::operator==(const cs& cs) const noexcept
		{
			return equal(cs);
		}
		bool cs::operator!=(const cs& cs) const noexcept
		{
			return !equal(cs);
		}

		cs& cs::assign(const cs&)
		{
			return *this;
		}
		cs& cs::assign(cs&&) noexcept
		{
			return *this;
		}
		bool cs::equal(const cs&) const noexcept
		{
			return true;
		}

		register_type::ptr cs::create()
		{
			return std::make_shared<cs>();
		}
	}

	namespace registers
	{
		ds::ds()
			: register_type("ds", register_category::segment_register, 2)
		{}

		bool ds::operator==(const ds& ds) const noexcept
		{
			return equal(ds);
		}
		bool ds::operator!=(const ds& ds) const noexcept
		{
			return !equal(ds);
		}

		ds& ds::assign(const ds&)
		{
			return *this;
		}
		ds& ds::assign(ds&&) noexcept
		{
			return *this;
		}
		bool ds::equal(const ds&) const noexcept
		{
			return true;
		}

		register_type::ptr ds::create()
		{
			return std::make_shared<ds>();
		}
	}

	namespace registers
	{
		es::es()
			: register_type("es", register_category::segment_register, 2)
		{}

		bool es::operator==(const es& es) const noexcept
		{
			return equal(es);
		}
		bool es::operator!=(const es& es) const noexcept
		{
			return !equal(es);
		}

		es& es::assign(const es&)
		{
			return *this;
		}
		es& es::assign(es&&) noexcept
		{
			return *this;
		}
		bool es::equal(const es&) const noexcept
		{
			return true;
		}

		register_type::ptr es::create()
		{
			return std::make_shared<es>();
		}
	}

	namespace registers
	{
		fs::fs()
			: register_type("fs", register_category::segment_register, 2)
		{}

		bool fs::operator==(const fs& fs) const noexcept
		{
			return equal(fs);
		}
		bool fs::operator!=(const fs& fs) const noexcept
		{
			return !equal(fs);
		}

		fs& fs::assign(const fs&)
		{
			return *this;
		}
		fs& fs::assign(fs&&) noexcept
		{
			return *this;
		}
		bool fs::equal(const fs&) const noexcept
		{
			return true;
		}

		register_type::ptr fs::create()
		{
			return std::make_shared<fs>();
		}
	}

	namespace registers
	{
		gs::gs()
			: register_type("gs", register_category::segment_register, 2)
		{}

		bool gs::operator==(const gs& gs) const noexcept
		{
			return equal(gs);
		}
		bool gs::operator!=(const gs& gs) const noexcept
		{
			return !equal(gs);
		}

		gs& gs::assign(const gs&)
		{
			return *this;
		}
		gs& gs::assign(gs&&) noexcept
		{
			return *this;
		}
		bool gs::equal(const gs&) const noexcept
		{
			return true;
		}

		register_type::ptr gs::create()
		{
			return std::make_shared<gs>();
		}
	}
}