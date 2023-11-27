#include <iostream>
#include "Child.hpp"
using namespace std;

void Child::doWork(int value) {
//    if (value < 10) {
//        throw std::invalid_argument("Child requires value >= 10"); // 事前条件を強化している
//    }

    // 基底クラスの事前条件を維持 (または下記を削除することで事前条件を緩める)
    Parent::doWork(value);

    // 子クラス固有の作業をする
    cout << "Child value = " << value << endl;
}


