#include <iostream>
using namespace std;
#include "Parent.hpp"
#include "Child.hpp"

    
int main() {
    Parent parent;
    parent.doWork(0);

    Child child;
    child.doWork(10);

    // 例外発生
    child.doWork(0);

    return 0;
}
