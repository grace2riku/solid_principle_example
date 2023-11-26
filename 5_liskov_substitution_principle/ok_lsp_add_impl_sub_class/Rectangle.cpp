#include "Rectangle.hpp"

int Rectangle::area() const {
    return width * height;
}

int Rectangle::getWidth() const {
    return width;
}

int Rectangle::getHeight() const {
    return height;
}

void Rectangle::setWidth(const int w) {
    width = w;
}

void Rectangle::setHeight(const int h) {
    height = h;
}

