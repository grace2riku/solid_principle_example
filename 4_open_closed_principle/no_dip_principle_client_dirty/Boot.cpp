#include "Boot.h"

// コンストラクタの実装
Boot::Boot() {
    if (settingValueSelect) {
        _settingValue = new SettingValueRam();
    } else {
        _settingValueSpiRam = new SettingValueSpiRam();
    }
}

Boot::~Boot() {
    if (settingValueSelect) {
        delete _settingValue;
    } else {
        delete _settingValueSpiRam;
    }
}

int Boot::readSettingValue() {
    if (settingValueSelect) {
        return _settingValue->read();
    } else {
        return _settingValueSpiRam->read();
    }
}