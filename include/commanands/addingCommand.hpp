#ifndef ADDING_COMMAND_HPP
#define ADDING_COMMAND_HPP

#include <any>
#include <unordered_map>

#include "command.hpp"

class AddingCommand :public Command {
public:
    AddingCommand();
    std::string execute() override;
    void setArgument(const Argument&) override;
    CommandPtr clone() override;

private:
    using ArgumentRegistry = std::unordered_map<std::string, std::any>; 

    ArgumentRegistry arguments_;
}; // end of class AddingCommand

#endif // ADDING_COMMAND_HPP
