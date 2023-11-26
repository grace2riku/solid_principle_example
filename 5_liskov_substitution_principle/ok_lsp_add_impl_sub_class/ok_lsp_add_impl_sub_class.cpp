#include <iostream>
using namespace std;
#include "Rectangle.hpp"
#include "Square.hpp"
#include "Shape.hpp"


void process(Shape& shape) {
    int w = shape.area() / shape.getHeight();
    shape.setHeight(10);
    
    std::cout << "expected area = " << (w * 10) << ", got " << shape.area() << std::endl;
}

int main() {
    Rectangle r(5, 5);
    process(r);  // expected area = 50, got 50

    Square s(5);
    process(s);  // expected area = 100, got 100, LSP is not violation!

    return 0;
}
