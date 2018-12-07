#include "Rectangle.h"

Rectangle::Rectangle(float a, float b) :
    m_a(a),
    m_b(b)
    {}

float Rectangle::circumfence() const
{
    return 2 * (m_a + m_b);
}

 float Rectangle::area() const
{
    return m_a * m_b;
}
