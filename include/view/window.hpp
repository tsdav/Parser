#ifndef WINDOW_HPP
#define WINDOW_HPP

#include <istream>
#include <string>

class Window {
public:
    std::string getInput(std::istream);
    void draw(); 
}; // end of class Window

#endif // WINDOW_HPP
