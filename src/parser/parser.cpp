#include "../../include/parser/parser.hpp"

CommandPtr Parser::parse(std::istream& input)
{ 
    buildCommand(input);

    const auto tokens = tokenizer_.tokenize(input);
}
