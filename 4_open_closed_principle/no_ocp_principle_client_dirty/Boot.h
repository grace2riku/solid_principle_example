#ifndef _H_BOOT_
#define _H_BOOT_

#include "SettingValueRam.h"
#include "SettingValueSpiRam.h"

class Boot {
    private:
        SettingValueRam* _settingValue;
        SettingValueSpiRam* _settingValueSpiRam;

    public:
        int settingValueSelect = 0;

        Boot();
        ~Boot();
        int readSettingValue();
};

#endif	// _H_BOOT_