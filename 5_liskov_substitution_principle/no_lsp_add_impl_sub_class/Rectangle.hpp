#ifndef _H_RECTANGLE_
#define _H_RECTANGLE_

class Rectangle {
protected:
    int width, height;

public:
    Rectangle(const int width, const int height) : width(width), height(height) {}

    virtual void setWidth(const int w);
    virtual void setHeight(const int h);

    int getWidth() const ;
    int getHeight() const ;
    int area() const ;
};

#endif	// _H_RECTANGLE_