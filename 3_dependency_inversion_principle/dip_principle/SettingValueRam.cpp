#include "SettingValueRam.h"
#include "Boot.h"

#include <iostream>
using namespace std;

// コンストラクタの実装
SettingValueRam::SettingValueRam() {
    cout << "SettingValueRam constructor" << endl;
}

SettingValueRam::~SettingValueRam() {
    cout << "SettingValueRam decstructor" << endl;
}

void SettingValueRam::write() {
}

int SettingValueRam::read() {
    return 123;
}
