#ifndef PARSER_HPP
#define PARSER_HPP

#include "../commands/command.hpp"
#include "tokenizer.hpp"

#include <istream>

class Parser {
public:
    CommandPtr parse(std::istream& input);

private:
    CommandPtr buildCommand(std::istream&);

private:
    Tokenizer tokenizer_;
}; // enf of class Parser

#endif // PARSER_HPP
