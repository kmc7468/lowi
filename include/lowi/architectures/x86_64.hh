#ifndef LOWI_HEADER_ARCHITECTURES_X86_64_HH
#define LOWI_HEADER_ARCHITECTURES_X86_64_HH

#include <lowi/architecture.hh>

namespace lowi
{
	namespace architectures
	{
		class x86_64 final : public architecture
		{
		public:
			x86_64();
			x86_64(const x86_64& x86_64);
			x86_64(x86_64&& x86_64) noexcept;
			virtual ~x86_64() override = default;

		public:
			x86_64& operator=(const x86_64& x86_64);
			x86_64& operator=(x86_64&& x86_64) noexcept;
			bool operator==(const x86_64& x86_64) const;
			bool operator!=(const x86_64& x86_64) const;

		public:
			x86_64& assign(const x86_64& x86_64);
			x86_64& assign(x86_64&& x86_64) noexcept;
			bool equal(const x86_64& x86_64) const;

		public:
			static ptr create();
		};
	}
}

#endif