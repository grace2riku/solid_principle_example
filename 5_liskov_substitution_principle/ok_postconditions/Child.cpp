#include <iostream>
#include "Child.hpp"
using namespace std;

int Child::getValue() {
    int val = Parent::getValue();

    // LSP原則NG: 事後条件を弱化している（負の値を返す可能性がある）
//    return val - 50;

    // LSP原則OK: 事後条件を強化している（より大きな正の値を返す）
    return val + 10;
}
