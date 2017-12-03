#ifndef LOWI_HEADER_ARCHITECTURE_HH
#define LOWI_HEADER_ARCHITECTURE_HH

#include <cstdint>
#include <memory>
#include <string>

namespace lowi
{
	class architecture
	{
	public:
		using ptr = std::shared_ptr<architecture>;

	public:
		architecture() = delete;
		architecture(const architecture& architecture) = delete;
		architecture(architecture&& architecture) noexcept = delete;
		virtual ~architecture() = default;

	public:
		architecture& operator=(const architecture& architecture) = delete;
		architecture& operator=(architecture&& architecture) noexcept = delete;
		bool operator==(const architecture& architecture) const;
		bool operator==(const ptr& architecture) const;
		bool operator!=(const architecture& architecture) const;
		bool operator!=(const ptr& architecture) const;

	public:
		bool equal(const architecture& architecture) const;
		bool equal(const ptr& architecture) const;

	public:
		std::string name() const;
		std::string name(const std::string& new_name);
		std::string author() const;
		std::string author(const std::string& new_author);
		std::uint64_t id() const noexcept;
		std::uint64_t id(std::uint64_t new_id) noexcept;
		bool locked() const noexcept;
		bool locked(bool lock) noexcept;

	private:
		std::string name_;
		std::string author_;
		std::uint64_t id_;
		bool locked_;
	};
}

#endif