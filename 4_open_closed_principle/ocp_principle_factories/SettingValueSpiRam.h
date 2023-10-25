#ifndef _H_SETTINGVALUESPIRAM_
#define _H_SETTINGVALUESPIRAM_

#include "ISettingValue.h"

class SettingValueSpiRam : public ISettingValue {
    private:

    public:
        SettingValueSpiRam();
        ~SettingValueSpiRam();
        void write();
        int read();
};

#endif	// _H_SETTINGVALUESPIRAM_