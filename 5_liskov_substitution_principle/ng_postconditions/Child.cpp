#include <iostream>
#include "Child.hpp"
using namespace std;

int Child::getValue() {
    int val = Parent::getValue();

    // 事後条件を弱化している（負の値を返す可能性がある）
    return val - 50;
}
