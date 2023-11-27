#include <iostream>
#include "Parent.hpp"
using namespace std;

void Parent::setValue(int val) {
    if (val < 0) {
        throw std::invalid_argument("value must be non-negative");
    }
    value = val;
    cout << "Parent value = " << value << endl;
}

