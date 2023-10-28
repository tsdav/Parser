#ifndef COMMAND_HPP
#define COMMAND_HPP

#include <any>
#include <memory>
#include <string>
#include <utility>

class Command;
using CommandPtr = std::unique_ptr<Command>;

using Argument = std::pair<std::string, std::any>;

class Command {
public:
    virtual std::string execute() = 0;
    virtual void setArgument(const Argument&) = 0;
    virtual CommandPtr clone() = 0;

    virtual ~Command() = default;
}; // end of class Command

#endif // COMMAND_HPP
