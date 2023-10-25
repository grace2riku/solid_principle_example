#include "SettingValueSpiRam.h"

#include <iostream>
using namespace std;

// コンストラクタの実装
SettingValueSpiRam::SettingValueSpiRam() {
    cout << "SettingValueSpiRam constructor" << endl;
}

SettingValueSpiRam::~SettingValueSpiRam() {
    cout << "SettingValueSpiRam decstructor" << endl;
}

void SettingValueSpiRam::write() {
}

int SettingValueSpiRam::read() {
    return 456;
}
