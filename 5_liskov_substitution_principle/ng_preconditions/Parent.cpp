#include <iostream>
#include "Parent.hpp"
using namespace std;

void Parent::doWork(int value) {
    if (value < 0) {
        throw std::invalid_argument("Parent requires value >= 0");
    }
    // 作業をする
    cout << "Parent value = " << value << endl;
}

