#ifndef REMOVING_COMMAND_HPP
#define REMOVING_COMMAND_HPP

#include "command.hpp"

class RemovingCommand :public Command {
public:
    std::string execute() override;
    void setArgument(const Argument&) override;
}; // end of class RemovingCommand

#endif // REMOVING_COMMAND_HPP
