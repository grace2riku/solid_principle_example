#ifndef _H_FACTORIES_
#define _H_FACTORIES_

#include "ISettingValue.h"
#include "SettingValueRam.h"

class Factories {
    public: 
        static ISettingValue* CreateSettingValue();
};

#endif	// _H_FACTORIES_