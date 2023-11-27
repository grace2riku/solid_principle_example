#include <iostream>
using namespace std;
#include "Parent.hpp"
#include "Child.hpp"

    
int main() {
    Parent parent;
    parent.doSomething();   // Parent -> doSomething() execute.

    Child child;
    child.doSomething();   // 例外発生: std::runtime_error: Error occurred

    return 0;
}
