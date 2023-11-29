#ifndef SQUARE_HPP_
#define SQUARE_HPP_

#include "Rectangle.hpp"

class Square : public Rectangle {
public:
    Square(int size) : Rectangle(size, size) {}

    void setWidth(const int w) override;
    void setHeight(const int h) override;
};

#endif	// SQUARE_HPP_