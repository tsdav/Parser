#ifndef TOKENIZER_HPP
#define TOKENIZER_HPP

#include <istream>
#include <string>
#include <vector>

using Tokens = std::vector<std::string>;

class Tokenizer {
public:
    Tokens tokenize(const std::string);
}; // end of class Tokenizer

#endif // TOKENIZER_HPP
