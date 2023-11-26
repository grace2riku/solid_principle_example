#ifndef CHILD_HPP_
#define CHILD_HPP_

#include "Parent.hpp"

class Child : public Parent  {
public:
    Child(int val) : Parent(val) {}

    void setValue(int val) override;
};

#endif	// CHILD_HPP_