#include <iostream>
#include "Child.hpp"
using namespace std;

void Child::doSomething() {
    throw std::runtime_error("Error occurred"); // 基底クラスが予期しない例外を投げる

    cout << "Child -> doSomething() execute." << endl;
}


