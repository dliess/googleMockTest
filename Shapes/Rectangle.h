#ifndef SQ_RECTANGLE_H
#define SQ_RECTANGLE_H

#include "IShape.h"

class Rectangle : public IShape
{
public:
    Rectangle(float a, float b);
    virtual float circumfence() const;
    virtual float area() const;
private:
    float m_a, m_b;
};

#endif