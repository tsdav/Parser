#ifndef CONTROLLER_HPP
#define CONTROLLER_HPP

#include <string>

#include "../parser/parser.hpp"
#include "../commands/command.hpp"
#include "../view/window.hpp"

class Application {
public:
    Application(const std::istream&);
    void exec();

private:
    void registerCommands();
    void run();
    double invokeCommand(CommandPtr);
    double handleInput(const std::string& input);

private:
    Window view_;
    CommandParser parser_;
}; // end of class Application

#endif // CONTROLLER_HPP
