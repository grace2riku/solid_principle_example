#ifndef PARENT_HPP_
#define PARENT_HPP_

class Parent {
protected:
    int value;  // 不変条件: 常に正の数
public:
    Parent(int val) : value(val >= 0 ? val : throw std::invalid_argument("value must be non-negative")) {}
    virtual void setValue(int val);
};

#endif	// PARENT_HPP_