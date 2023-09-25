#include "Boot.h"
//#include "SettingValueRam.h"
//#include "Factories.h"
#include "ISettingValue.h"

#include <iostream>
using namespace std;

// コンストラクタの実装
Boot::Boot(ISettingValue* settingValue) {
    cout << "Boot constructor" << endl;

//    _settingValue = Factories::CreateSettingValue();
    _settingValue = settingValue;
}

Boot::~Boot() {
    cout << "Boot destructor" << endl;

    delete _settingValue;
}

int Boot::readSettingValue() {
    return _settingValue->read();
}