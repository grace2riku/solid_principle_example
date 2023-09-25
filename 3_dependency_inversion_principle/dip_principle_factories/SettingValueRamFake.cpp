#include "SettingValueRamFake.h"

#include <iostream>
using namespace std;

// コンストラクタの実装
SettingValueRamFake::SettingValueRamFake() {
    cout << "SettingValueRamFake constructor" << endl;
}

SettingValueRamFake::~SettingValueRamFake() {
    cout << "SettingValueRamFake decstructor" << endl;
}

void SettingValueRamFake::write() {
}

int SettingValueRamFake::read() {
    return 456;
}
