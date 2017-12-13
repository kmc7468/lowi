#ifndef LOWI_HEADER_SCRIPT_HH
#define LOWI_HEADER_SCRIPT_HH

#include <lowi/architecture.hh>
#include <lowi/instruction.hh>

#include <map>
#include <memory>
#include <string>
#include <vector>

namespace lowi
{
	class script final
	{
	public:
		using ptr = std::shared_ptr<script>;

	public:
		script() = default;
		script(const script& script) = delete;
		script(script&& script) noexcept = delete;
		~script() = default;

	public:
		script& operator=(const script& script) = delete;
		script& operator=(script&& script) noexcept = delete;
		bool operator==(const script& script) const = delete;
		bool operator!=(const script& script) const = delete;

	public:
		architecture::ptr architecture() const;

	private:
		std::map<std::string, std::vector<instruction>> files_;
		architecture::ptr architecture_;
	};
}

#endif