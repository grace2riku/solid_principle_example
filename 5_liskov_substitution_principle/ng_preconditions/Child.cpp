#include <iostream>
#include "Child.hpp"
using namespace std;

void Child::doWork(int value) {
    if (value < 10) {
        throw std::invalid_argument("Child requires value >= 10"); // 事前条件を強化している
    }
    // 子クラス固有の作業をする
    cout << "Child value = " << value << endl;
}


