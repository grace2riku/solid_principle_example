#include <iostream>
using namespace std;
#include "Parent.hpp"
#include "Child.hpp"

    
int main() {
    Parent parent;
    parent.doWork(0);   // Parent value = 0

    Child child;
    child.doWork(10);   // Child value = 10

    // 例外発生 std::invalid_argument: Child requires value >= 10
    child.doWork(0);

    return 0;
}
