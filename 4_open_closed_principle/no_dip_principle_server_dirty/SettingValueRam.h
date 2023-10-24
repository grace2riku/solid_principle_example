#ifndef _H_SETTINGVALUERAM_
#define _H_SETTINGVALUERAM_

enum class eSettingValueRamType
{
    Ram,
    SpiRam,
};

class SettingValueRam {
    private:
        eSettingValueRamType _eSettingValueRamType;

    public:
        SettingValueRam(eSettingValueRamType eSettingValueRamType);
        void write();
        int read();
};

#endif	// _H_SETTINGVALUERAM_