#include "Boot.h"
#include "SettingValueRam.h"
#include <iostream>
using namespace std;

// コンストラクタの実装
Boot::Boot() {
    cout << "Boot constructor" << endl;

    _settingValue = new SettingValueRam();
}

Boot::~Boot() {
    cout << "Boot destructor" << endl;

    delete _settingValue;
}

int Boot::readSettingValue() {
    return _settingValue->read();
}