#ifndef ITEM_HPP
#define ITEM_HPP

#include <memory>

struct Position {
    double xCoord;
    double yCoord;
}; // end of struct Position

class Item {
public:
    virtual void setPosition(const Position&) = 0;
    virtual Position getPosition() = 0;
    virtual ~Item() = default;
}; // end of class Item

using ItemPtr = std::unique_ptr<Item>;

#endif // ITEM_HPP
