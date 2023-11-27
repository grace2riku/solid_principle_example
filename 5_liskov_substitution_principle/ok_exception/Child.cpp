#include <iostream>
#include "Child.hpp"
using namespace std;

void Child::doSomething() {
    // LSP NG: 基底クラスが予期しない例外を投げる
//    throw std::runtime_error("Error occurred"); 

    // LSP OK: 基底クラスが予期しない例外は投げない
    cout << "Child -> doSomething() execute." << endl;
}


