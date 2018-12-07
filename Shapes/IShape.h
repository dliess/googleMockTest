#ifndef INTERFACE_SHAPE_H
#define INTERFACE_SHAPE_H

class IShape
{
public:
    virtual float circumfence() const = 0;
    virtual float area() const = 0;
};

#endif