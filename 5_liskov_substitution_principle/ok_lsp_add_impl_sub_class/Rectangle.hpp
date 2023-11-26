#ifndef RECTANGLE_HPP_
#define RECTANGLE_HPP_

#include "Shape.hpp"

class Rectangle : public Shape {
protected:
    int width, height;

public:
    Rectangle(const int width, const int height) : width(width), height(height) {}

    int area() const override;
    int getWidth() const override;
    int getHeight() const override;
    void setWidth(const int w) override;
    void setHeight(const int h) override;
};

#endif	// RECTANGLE_HPP_