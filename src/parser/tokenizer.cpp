#include <sstream>

#include "../../include/parser/tokenizer.hpp"

Tokens Tokenizer::tokenize(const std::string input)
{
    std::istringstream in(input);
    Tokens tokens;
    std::string token;

    while (in >> token) {
        tokens.push_back(token);
    }

    return tokens;
}
