#include "Factories.h"
#include "ISettingValue.h"
#include "SettingValueRam.h"
#include "SettingValueSpiRam.h"

ISettingValue* Factories::CreateSettingValue() {
//    return new SettingValueRam();
    return new SettingValueSpiRam();
}