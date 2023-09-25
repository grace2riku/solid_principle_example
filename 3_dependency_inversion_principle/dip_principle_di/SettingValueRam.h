#ifndef _H_SETTINGVALUERAM_
#define _H_SETTINGVALUERAM_

#include "ISettingValue.h"

class SettingValueRam : public ISettingValue {
    private:

    public:
        SettingValueRam();
        ~SettingValueRam();
        void write();
        int read();
};

#endif	// _H_SETTINGVALUERAM_