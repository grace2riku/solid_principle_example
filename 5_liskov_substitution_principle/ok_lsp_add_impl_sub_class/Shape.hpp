#ifndef SHAPE_HPP_
#define SHAPE_HPP_

class Shape {
public:
    virtual int area() const = 0;
    virtual int getWidth() const = 0;
    virtual int getHeight() const = 0;
    virtual void setWidth(const int w) = 0;
    virtual void setHeight(const int h) = 0;
    virtual ~Shape() {}
};

#endif	// SHAPE_HPP_