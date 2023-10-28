#include "../../include/commands/quitingCommand.hpp"

#include <cstdlib>

std::string QuitingCommand::execute()
{
    std::exit(0);
}
