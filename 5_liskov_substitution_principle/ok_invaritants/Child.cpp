#include <iostream>
#include "Child.hpp"
using namespace std;

void Child::setValue(int val) {
    // LSP原則NG: 親クラスよりも許容範囲を狭めている
//    if (val < -10) {
//        throw std::invalid_argument("Child requires value >= -10");
//    }
//    // 基底クラスの不変条件「正の数」を破っている
//    value = val;

    // LSP原則OK: 親クラスの不変条件を保持する
    Parent::setValue(val);

    cout << "Child value = " << this->value << endl;
}
