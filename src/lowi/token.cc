#include <lowi/token.hh>

#include <utility>

namespace lowi
{
	token::token(const std::string& word, ::size_t line, std::size_t col, std::size_t end_col)
		: word_(word), line_(line), col_(col), end_col_(end_col)
	{}
	token::token(const token& token)
		: word_(token.word_), line_(token.line_), col_(token.col_), end_col_(token.end_col_)
	{}
	token::token(token&& token) noexcept
		: word_(std::move(token.word_)), line_(std::move(token.line_)), col_(std::move(token.col_)), end_col_(std::move(token.end_col_))
	{}

	token::token()
		: word_(), line_(0), col_(0), end_col_(0)
	{}

	token& token::operator=(const token& token)
	{
		return assign(token);
	}
	token& token::operator=(token&& token) noexcept
	{
		return assign(std::move(token));
	}
	bool token::operator==(const token& token) const
	{
		return equal(token);
	}
	bool token::operator!=(const token& token) const
	{
		return !equal(token);
	}

	token& token::assign(const token& token)
	{
		word_ = token.word_;
		line_ = token.line_;
		col_ = token.col_;
		end_col_ = token.end_col_;
		return *this;
	}
	token& token::assign(token&& token) noexcept
	{
		word_ = std::move(token.word_);
		line_ = std::move(token.line_);
		col_ = std::move(token.col_);
		end_col_ = std::move(token.end_col_);
		return *this;
	}
	bool token::equal(const token& token) const
	{
		return word_ == token.word_ && line_ == token.line_ &&
			col_ == token.col_ && end_col_ == token.end_col_;
	}

	std::string token::word() const
	{
		return word_;
	}
	std::string token::word(const std::string& new_word)
	{
		return word_ = new_word;
	}
	std::size_t token::line() const noexcept
	{
		return line_;
	}
	std::size_t token::line(std::size_t new_line) noexcept
	{
		return line_ = new_line;
	}
	std::size_t token::col() const noexcept
	{
		return col_;
	}
	std::size_t token::col(std::size_t new_col) noexcept
	{
		return col_ = new_col;
	}
	std::size_t token::end_col() const noexcept
	{
		return end_col_;
	}
	std::size_t token::end_col(std::size_t new_end_col) noexcept
	{
		return end_col_ = new_end_col;
	}

	const token token::empty;
}