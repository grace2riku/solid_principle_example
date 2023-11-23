#include "Rectangle.hpp"

void Rectangle::setWidth(const int w) {
    width = w;
}

void Rectangle::setHeight(const int h) {
    height = h;
}

int Rectangle::getWidth() const {
    return width;
}

int Rectangle::getHeight() const {
    return height;
}

int Rectangle::area() const {
    return width * height;
}
