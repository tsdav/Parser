#ifndef QUITING_COMMAND_HPP
#define QUITING_COMMAND_HPP

#include "command.hpp"

class QuitingCommand :public Command
{
public:
    std::string execute() override;
    
}; // end of class class QuitingCommand

#endif // QUITING_COMMAND_HPP
