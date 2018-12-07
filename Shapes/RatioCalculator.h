#ifndef RATIO_CALCULATOR_H
#define RATIO_CALCULATOR_H

class IShape;

class RatioCalculator
{
public:
    RatioCalculator(const IShape& rShape);
    float calculate() const;
private:
    const IShape& m_rShape;
};

#endif