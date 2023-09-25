#include <iostream>
using namespace std;
#include "Boot.h"
#include "Factories.h"

int main() {
//    Boot* boot = new Boot();
    Boot* boot = new Boot(Factories::CreateSettingValue());

    cout << "SettingValue = " << boot->readSettingValue() << endl;

    delete boot;

    return 0;
}
