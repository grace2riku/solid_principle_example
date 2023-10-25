#include "Boot.h"

// コンストラクタの実装
Boot::Boot() {
    _settingValue = new SettingValueRam();
}

Boot::~Boot() {
    delete _settingValue;
}

int Boot::readSettingValue() {
    return _settingValue->read();
}