#ifndef SQUARE_HPP_
#define SQUARE_HPP_

#include "Shape.hpp"

class Square : public Shape {
private:
    int size;

public:
    Square(int size) : size(size) {}

    int area() const override;
    int getWidth() const override;
    int getHeight() const override;
    void setWidth(const int w) override;
    void setHeight(const int h) override;
};

#endif	// SQUARE_HPP_