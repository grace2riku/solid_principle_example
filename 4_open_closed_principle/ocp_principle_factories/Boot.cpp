#include "Boot.h"
#include "Factories.h"

#include <iostream>
using namespace std;

// コンストラクタの実装
Boot::Boot() {
    cout << "Boot constructor" << endl;

    _settingValue = Factories::CreateSettingValue();
}

Boot::~Boot() {
    cout << "Boot destructor" << endl;

    delete _settingValue;
}

int Boot::readSettingValue() {
    return _settingValue->read();
}