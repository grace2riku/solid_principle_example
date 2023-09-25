#ifndef _H_ISETTINGVALUE_
#define _H_ISETTINGVALUE_

#include <iostream>
using namespace std;

class ISettingValue {
    public:
        virtual void write() = 0;
        virtual int read() = 0;

        // 仮想デストラクタ
        virtual ~ISettingValue(){
            cout << "ISettingValue destructor" << endl;
        }
};

#endif	// _H_ISETTINGVALUE_