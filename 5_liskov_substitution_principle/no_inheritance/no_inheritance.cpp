#include <iostream>
using namespace std;
#include "Rectangle.hpp"
#include "Square.hpp"

void process(Rectangle& r) {
    int w = r.getWidth();
    r.setHeight(10);

    std::cout << "expected area = " << (w * 10) << ", got " << r.area() << std::endl;
}

    
int main() {
    Rectangle r(5, 5);
    process(r);  // expected area = 50, got 50

    Square s(5);
    process(s);  // expected area = 50, got 100, LSP violation!

    return 0;
}
