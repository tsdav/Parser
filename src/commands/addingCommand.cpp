#include <stdexcept>

#include "../../include/items/item.hpp"
#include "../../include/commands/addingCommand.hpp"

AddingCommand::AddingCommand()
{
    arguments_["-pos"] = Position{0, 0};
}

std::string AddingCommand::execute()
{
    return "Add command executed successfully.";
}

void AddingCommand::setArgument(const Argument& arg)
{
    const auto iter = arguments_.find(arg.first);

    if (iter == arguments_.end()) {
        throw std::runtime_error("Invalid argument for command");
    }

    arguments_[iter->first] = arg.second;
}

CommandPtr AddingCommand::clone()
{
    return std::make_unique<AddCommand>(*this);
}
