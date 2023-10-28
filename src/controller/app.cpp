#include "../../include/controller/app.hpp"

#include "../../include/commands/addingCommand.hpp"
#include "../../include/commands/quitingCommand.hpp"

Application::Application(const std::istream& input)
{
}

void Application::exec()
{
    while (true) {
        const auto input = view_.getInput();   
    }
}

void Application::run()
{
    while (true) {
        const auto input = ui_->getInput();
        const auto result = handleInput(input);
        ui_->displayOutput(result);
    }
}

double Application::handleInput(const std::string& input)
{
    const auto commandContent = parser_->parse(input);
    const auto result = invokeCommand(command, commandContent.second);
    return result;
}

double Application::invokeCommand(CommandPtr cmd, const Arguments& args)
{
    return cmd->execute();
}
