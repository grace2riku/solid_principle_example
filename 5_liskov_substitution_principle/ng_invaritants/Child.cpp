#include <iostream>
#include "Child.hpp"
using namespace std;

void Child::setValue(int val) {
    if (val < -10) {    // 親クラスよりも許容範囲を狭めている
        throw std::invalid_argument("Child requires value >= -10");
    }
    // 基底クラスの不変条件「正の数」を破っている
    value = val;

    cout << "Child value = " << value << endl;
}
