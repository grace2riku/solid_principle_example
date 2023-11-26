#include "Square.hpp"

int Square::area() const {
    return size * size;
}

int Square::getWidth() const {
    return size;
}

int Square::getHeight() const {
    return size;
}

void Square::setWidth(const int w) {
    size = w;
}

void Square::setHeight(const int h) {
    size = h;
}
