#ifndef _H_SQUARE_
#define _H_SQUARE_

#include "Rectangle.hpp"

class Square : public Rectangle {
public:
    Square(int size) : Rectangle(size, size) {}

    void setWidth(const int w) override;
    void setHeight(const int h) override;
};

#endif	// _H_SQUARE_