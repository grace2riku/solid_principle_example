#ifndef _H_SETTINGVALUERAMFAKE_
#define _H_SETTINGVALUERAMFAKE_

#include "ISettingValue.h"

class SettingValueRamFake : public ISettingValue {
    private:

    public:
        SettingValueRamFake();
        ~SettingValueRamFake();
        void write();
        int read();
};

#endif	// _H_SETTINGVALUERAMFAKE_