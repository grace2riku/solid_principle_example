#include <iostream>
using namespace std;
#include "Parent.hpp"
#include "Child.hpp"

    
int main() {
    int ret_val;

    Parent parent;
    ret_val = parent.getValue();
    cout << "Parent return value = " << ret_val << endl;

    Child child;
    ret_val = child.getValue();
    cout << "Child return value = " << ret_val << endl;

    return 0;
}
