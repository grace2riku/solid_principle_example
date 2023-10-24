#ifndef _H_BOOT_
#define _H_BOOT_

#include "SettingValueRam.h"

class Boot {
    private:
        SettingValueRam* _settingValue;

    public:
        Boot();
        ~Boot();
        int readSettingValue();
};

#endif	// _H_BOOT_