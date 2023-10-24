#include "Boot.h"

// コンストラクタの実装
Boot::Boot() {
//    _settingValue = new SettingValueRam(eSettingValueRamType::Ram);
    _settingValue = new SettingValueRam(eSettingValueRamType::SpiRam);
}

Boot::~Boot() {
    delete _settingValue;
}

int Boot::readSettingValue() {
    return _settingValue->read();
}