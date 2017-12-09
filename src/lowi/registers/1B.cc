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
		ah::ah()
			: register_type("ah", register_category::general_register, 1)
		{}

		bool ah::operator==(const ah& ah) const noexcept
		{
			return equal(ah);
		}
		bool ah::operator!=(const ah& ah) const noexcept
		{
			return !equal(ah);
		}

		ah& ah::assign(const ah&)
		{
			return *this;
		}
		ah& ah::assign(ah&&) noexcept
		{
			return *this;
		}
		bool ah::equal(const ah&) const noexcept
		{
			return true;
		}

		register_type::ptr ah::create()
		{
			static register_type::ptr instance = nullptr;

			if (instance == nullptr)
			{
				instance = std::make_shared<ah>();
			}

			return instance;
		}
	}

	namespace registers
	{
		al::al()
			: register_type("al", register_category::general_register, 1)
		{}

		bool al::operator==(const al& al) const noexcept
		{
			return equal(al);
		}
		bool al::operator!=(const al& al) const noexcept
		{
			return !equal(al);
		}

		al& al::assign(const al&)
		{
			return *this;
		}
		al& al::assign(al&&) noexcept
		{
			return *this;
		}
		bool al::equal(const al&) const noexcept
		{
			return true;
		}

		register_type::ptr al::create()
		{
			static register_type::ptr instance = nullptr;

			if (instance == nullptr)
			{
				instance = std::make_shared<al>();
			}

			return instance;
		}
	}

	namespace registers
	{
		bh::bh()
			: register_type("bh", register_category::general_register, 1)
		{}

		bool bh::operator==(const bh& bh) const noexcept
		{
			return equal(bh);
		}
		bool bh::operator!=(const bh& bh) const noexcept
		{
			return !equal(bh);
		}

		bh& bh::assign(const bh&)
		{
			return *this;
		}
		bh& bh::assign(bh&&) noexcept
		{
			return *this;
		}
		bool bh::equal(const bh&) const noexcept
		{
			return true;
		}

		register_type::ptr bh::create()
		{
			static register_type::ptr instance = nullptr;

			if (instance == nullptr)
			{
				instance = std::make_shared<bh>();
			}

			return instance;
		}
	}

	namespace registers
	{
		bl::bl()
			: register_type("bl", register_category::general_register, 1)
		{}

		bool bl::operator==(const bl& bl) const noexcept
		{
			return equal(bl);
		}
		bool bl::operator!=(const bl& bl) const noexcept
		{
			return !equal(bl);
		}

		bl& bl::assign(const bl&)
		{
			return *this;
		}
		bl& bl::assign(bl&&) noexcept
		{
			return *this;
		}
		bool bl::equal(const bl&) const noexcept
		{
			return true;
		}

		register_type::ptr bl::create()
		{
			static register_type::ptr instance = nullptr;

			if (instance == nullptr)
			{
				instance = std::make_shared<bl>();
			}

			return instance;
		}
	}

	namespace registers
	{
		ch::ch()
			: register_type("ch", register_category::general_register, 1)
		{}

		bool ch::operator==(const ch& ch) const noexcept
		{
			return equal(ch);
		}
		bool ch::operator!=(const ch& ch) const noexcept
		{
			return !equal(ch);
		}

		ch& ch::assign(const ch&)
		{
			return *this;
		}
		ch& ch::assign(ch&&) noexcept
		{
			return *this;
		}
		bool ch::equal(const ch&) const noexcept
		{
			return true;
		}

		register_type::ptr ch::create()
		{
			static register_type::ptr instance = nullptr;

			if (instance == nullptr)
			{
				instance = std::make_shared<ch>();
			}

			return instance;
		}
	}

	namespace registers
	{
		cl::cl()
			: register_type("cl", register_category::general_register, 1)
		{}

		bool cl::operator==(const cl& cl) const noexcept
		{
			return equal(cl);
		}
		bool cl::operator!=(const cl& cl) const noexcept
		{
			return !equal(cl);
		}

		cl& cl::assign(const cl&)
		{
			return *this;
		}
		cl& cl::assign(cl&&) noexcept
		{
			return *this;
		}
		bool cl::equal(const cl&) const noexcept
		{
			return true;
		}

		register_type::ptr cl::create()
		{
			static register_type::ptr instance = nullptr;

			if (instance == nullptr)
			{
				instance = std::make_shared<cl>();
			}

			return instance;
		}
	}

	namespace registers
	{
		dh::dh()
			: register_type("dh", register_category::general_register, 1)
		{}

		bool dh::operator==(const dh& dh) const noexcept
		{
			return equal(dh);
		}
		bool dh::operator!=(const dh& dh) const noexcept
		{
			return !equal(dh);
		}

		dh& dh::assign(const dh&)
		{
			return *this;
		}
		dh& dh::assign(dh&&) noexcept
		{
			return *this;
		}
		bool dh::equal(const dh&) const noexcept
		{
			return true;
		}

		register_type::ptr dh::create()
		{
			static register_type::ptr instance = nullptr;

			if (instance == nullptr)
			{
				instance = std::make_shared<dh>();
			}

			return instance;
		}
	}

	namespace registers
	{
		dl::dl()
			: register_type("dl", register_category::general_register, 1)
		{}

		bool dl::operator==(const dl& dl) const noexcept
		{
			return equal(dl);
		}
		bool dl::operator!=(const dl& dl) const noexcept
		{
			return !equal(dl);
		}

		dl& dl::assign(const dl&)
		{
			return *this;
		}
		dl& dl::assign(dl&&) noexcept
		{
			return *this;
		}
		bool dl::equal(const dl&) const noexcept
		{
			return true;
		}

		register_type::ptr dl::create()
		{
			static register_type::ptr instance = nullptr;

			if (instance == nullptr)
			{
				instance = std::make_shared<dl>();
			}

			return instance;
		}
	}

	namespace registers
	{
		r8l::r8l()
			: register_type("r8l", register_category::general_register, 1)
		{}

		bool r8l::operator==(const r8l& r8l) const noexcept
		{
			return equal(r8l);
		}
		bool r8l::operator!=(const r8l& r8l) const noexcept
		{
			return !equal(r8l);
		}

		r8l& r8l::assign(const r8l&)
		{
			return *this;
		}
		r8l& r8l::assign(r8l&&) noexcept
		{
			return *this;
		}
		bool r8l::equal(const r8l&) const noexcept
		{
			return true;
		}

		register_type::ptr r8l::create()
		{
			static register_type::ptr instance = nullptr;

			if (instance == nullptr)
			{
				instance = std::make_shared<r8l>();
			}

			return instance;
		}
	}

	namespace registers
	{
		r9l::r9l()
			: register_type("r9l", register_category::general_register, 1)
		{}

		bool r9l::operator==(const r9l& r9l) const noexcept
		{
			return equal(r9l);
		}
		bool r9l::operator!=(const r9l& r9l) const noexcept
		{
			return !equal(r9l);
		}

		r9l& r9l::assign(const r9l&)
		{
			return *this;
		}
		r9l& r9l::assign(r9l&&) noexcept
		{
			return *this;
		}
		bool r9l::equal(const r9l&) const noexcept
		{
			return true;
		}

		register_type::ptr r9l::create()
		{
			static register_type::ptr instance = nullptr;

			if (instance == nullptr)
			{
				instance = std::make_shared<r9l>();
			}

			return instance;
		}
	}

	namespace registers
	{
		r10l::r10l()
			: register_type("r10l", register_category::general_register, 1)
		{}

		bool r10l::operator==(const r10l& r10l) const noexcept
		{
			return equal(r10l);
		}
		bool r10l::operator!=(const r10l& r10l) const noexcept
		{
			return !equal(r10l);
		}

		r10l& r10l::assign(const r10l&)
		{
			return *this;
		}
		r10l& r10l::assign(r10l&&) noexcept
		{
			return *this;
		}
		bool r10l::equal(const r10l&) const noexcept
		{
			return true;
		}

		register_type::ptr r10l::create()
		{
			static register_type::ptr instance = nullptr;

			if (instance == nullptr)
			{
				instance = std::make_shared<r10l>();
			}

			return instance;
		}
	}

	namespace registers
	{
		r11l::r11l()
			: register_type("r11l", register_category::general_register, 1)
		{}

		bool r11l::operator==(const r11l& r11l) const noexcept
		{
			return equal(r11l);
		}
		bool r11l::operator!=(const r11l& r11l) const noexcept
		{
			return !equal(r11l);
		}

		r11l& r11l::assign(const r11l&)
		{
			return *this;
		}
		r11l& r11l::assign(r11l&&) noexcept
		{
			return *this;
		}
		bool r11l::equal(const r11l&) const noexcept
		{
			return true;
		}

		register_type::ptr r11l::create()
		{
			static register_type::ptr instance = nullptr;

			if (instance == nullptr)
			{
				instance = std::make_shared<r11l>();
			}

			return instance;
		}
	}

	namespace registers
	{
		r12l::r12l()
			: register_type("r12l", register_category::general_register, 1)
		{}

		bool r12l::operator==(const r12l& r12l) const noexcept
		{
			return equal(r12l);
		}
		bool r12l::operator!=(const r12l& r12l) const noexcept
		{
			return !equal(r12l);
		}

		r12l& r12l::assign(const r12l&)
		{
			return *this;
		}
		r12l& r12l::assign(r12l&&) noexcept
		{
			return *this;
		}
		bool r12l::equal(const r12l&) const noexcept
		{
			return true;
		}

		register_type::ptr r12l::create()
		{
			static register_type::ptr instance = nullptr;

			if (instance == nullptr)
			{
				instance = std::make_shared<r12l>();
			}

			return instance;
		}
	}

	namespace registers
	{
		r13l::r13l()
			: register_type("r13l", register_category::general_register, 1)
		{}

		bool r13l::operator==(const r13l& r13l) const noexcept
		{
			return equal(r13l);
		}
		bool r13l::operator!=(const r13l& r13l) const noexcept
		{
			return !equal(r13l);
		}

		r13l& r13l::assign(const r13l&)
		{
			return *this;
		}
		r13l& r13l::assign(r13l&&) noexcept
		{
			return *this;
		}
		bool r13l::equal(const r13l&) const noexcept
		{
			return true;
		}

		register_type::ptr r13l::create()
		{
			static register_type::ptr instance = nullptr;

			if (instance == nullptr)
			{
				instance = std::make_shared<r13l>();
			}

			return instance;
		}
	}

	namespace registers
	{
		r14l::r14l()
			: register_type("r14l", register_category::general_register, 1)
		{}

		bool r14l::operator==(const r14l& r14l) const noexcept
		{
			return equal(r14l);
		}
		bool r14l::operator!=(const r14l& r14l) const noexcept
		{
			return !equal(r14l);
		}

		r14l& r14l::assign(const r14l&)
		{
			return *this;
		}
		r14l& r14l::assign(r14l&&) noexcept
		{
			return *this;
		}
		bool r14l::equal(const r14l&) const noexcept
		{
			return true;
		}

		register_type::ptr r14l::create()
		{
			static register_type::ptr instance = nullptr;

			if (instance == nullptr)
			{
				instance = std::make_shared<r14l>();
			}

			return instance;
		}
	}

	namespace registers
	{
		r15l::r15l()
			: register_type("r15l", register_category::general_register, 1)
		{}

		bool r15l::operator==(const r15l& r15l) const noexcept
		{
			return equal(r15l);
		}
		bool r15l::operator!=(const r15l& r15l) const noexcept
		{
			return !equal(r15l);
		}

		r15l& r15l::assign(const r15l&)
		{
			return *this;
		}
		r15l& r15l::assign(r15l&&) noexcept
		{
			return *this;
		}
		bool r15l::equal(const r15l&) const noexcept
		{
			return true;
		}

		register_type::ptr r15l::create()
		{
			static register_type::ptr instance = nullptr;

			if (instance == nullptr)
			{
				instance = std::make_shared<r15l>();
			}

			return instance;
		}
	}
}