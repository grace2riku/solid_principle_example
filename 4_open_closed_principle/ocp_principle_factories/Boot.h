#ifndef _H_BOOT_
#define _H_BOOT_

#include "ISettingValue.h"

class Boot {
    private:
        ISettingValue* _settingValue;

    public:
        Boot();
        ~Boot();
        int readSettingValue();
};

#endif	// _H_BOOT_