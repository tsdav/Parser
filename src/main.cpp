#include <any>
#include <iostream>
#include <memory>
#include <sstream>

#include "../../include/controller/app.hpp"
#include "../../include/view/window.hpp" 
#include "../../include/parser/parser.hpp" 

int main()
{
    Application app{std::cin};
    app.exec();
}
