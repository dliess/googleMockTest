#include "RatioCalculator.h"

#include "IShape.h"

RatioCalculator::RatioCalculator(const IShape& rShape) :
    m_rShape(rShape)
    {
    }

float RatioCalculator::calculate() const
{
    return m_rShape.area() / m_rShape.circumfence();
}