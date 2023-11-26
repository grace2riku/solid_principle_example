#include <iostream>
using namespace std;
#include "Parent.hpp"
#include "Child.hpp"

    
int main() {
    // 例外: std::invalid_argument("value must be non-negative")
//    Parent parent(-1);

    Parent parent(0);
//    parent.setValue(-1);    // 例外: std::invalid_argument("value must be non-negative")

    parent.setValue(1);     // Parent value = 1

//    Child child(-1);    // 例外: std::invalid_argument("value must be non-negative")

    Child child(0);
//    child.setValue(-11);    // 例外: std::invalid_argument: Child requires value >= -10

    child.setValue(-10);    // Child value = -10

    return 0;
}
