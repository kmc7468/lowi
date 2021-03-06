#ifndef LOWI_HEADER_ARCHITECTURE_HH
#define LOWI_HEADER_ARCHITECTURE_HH

#include <lowi/register_type.hh>

#include <cstdint>
#include <memory>
#include <string>
#include <vector>

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

	protected:
		architecture(const std::string& name, const std::string& author, std::uint64_t id);
		architecture(const std::string& name, const std::string& author, std::uint64_t id,
			const std::vector<register_type::ptr>& registers);
		architecture(const std::string& name, const std::string& author, std::uint64_t id,
			bool lock);
		architecture(const std::string& name, const std::string& author, std::uint64_t id,
			const std::vector<register_type::ptr>& registers, bool lock);

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
		template<typename Ty_>
		static ptr create()
		{
			return std::make_shared<Ty_>();
		}

	public:
		void add_register(const register_type::ptr& register_type);
		void remove_register(const register_type::ptr& register_type);

	public:
		std::string name() const;
		std::string name(const std::string& new_name);
		std::string author() const;
		std::string author(const std::string& new_author);
		std::uint64_t id() const noexcept;
		std::uint64_t id(std::uint64_t new_id) noexcept;
		bool locked() const noexcept;
		bool locked(bool lock) noexcept;
		std::vector<register_type::ptr> registers() const;
		const std::vector<register_type::ptr>& registers() noexcept;

	protected:
		std::vector<register_type::ptr>& protected_registers();

	private:
		std::string name_;
		std::string author_;
		std::uint64_t id_;
		bool locked_ = false;

		std::vector<register_type::ptr> registers_;
	};
}

#endif