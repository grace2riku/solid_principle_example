#include "SettingValueRam.h"

// コンストラクタの実装
SettingValueRam::SettingValueRam(eSettingValueRamType eSettingValueRamType) {
    _eSettingValueRamType = eSettingValueRamType;
}

void SettingValueRam::write() {
    if (_eSettingValueRamType == eSettingValueRamType::Ram) {
        // SettingValueRamのロジック

    } else {
        // SettingValueSpiRamのロジック

    }
}

int SettingValueRam::read() {
    if (_eSettingValueRamType == eSettingValueRamType::Ram) {
        // SettingValueRamのロジック
        return 123;
    } else {
        // SettingValueSpiRamのロジック
        return 456;
    }
}
