#ifndef CHILD_HPP_
#define CHILD_HPP_

#include "Parent.hpp"

class Child : public Parent  {
public:
    int getValue() override;
};

#endif	// CHILD_HPP_