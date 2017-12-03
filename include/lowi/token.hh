#ifndef LOWI_HEADER_TOKEN_HH
#define LOWI_HEADER_TOKEN_HH

#include <cstddef>
#include <string>

namespace lowi
{
	class token final
	{
	public:
		token(const std::string& word, std::size_t line, std::size_t col, std::size_t end_col);
		token(const token& token);
		token(token&& token) noexcept;
		~token() = default;

	public:
		token& operator=(const token& token);
		token& operator=(token&& token) noexcept;
		bool operator==(const token& token) const;
		bool operator!=(const token& token) const;

	public:
		token& assign(const token& token);
		token& assign(token&& token) noexcept;
		bool equal(const token& token) const;

	public:
		std::string word() const;
		std::string word(const std::string& new_word);
		std::size_t line() const noexcept;
		std::size_t line(std::size_t new_line) noexcept;
		std::size_t col() const noexcept;
		std::size_t col(std::size_t new_col) noexcept;
		std::size_t end_col() const noexcept;
		std::size_t end_col(std::size_t new_end_col) noexcept;

	private:
		std::string word_;
		std::size_t line_;
		std::size_t col_;
		std::size_t end_col_;

	public:
		static const token empty;
	};
}

#endif