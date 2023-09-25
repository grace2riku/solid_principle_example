#include "Factories.h"
#include "ISettingValue.h"
#include "SettingValueRam.h"
#include "SettingValueRamFake.h"

ISettingValue* Factories::CreateSettingValue() {
    return new SettingValueRam();
//    return new SettingValueRamFake();
}