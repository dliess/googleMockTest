#ifndef MOCK_SHAPE_H
#define MOCK_SHAPE_H

#include "gmock/gmock.h"  // Brings in Google Mock.
#include "IShape.h"

class MockShape : public IShape 
{
 public:

    MOCK_CONST_METHOD0(circumfence, float());
    MOCK_CONST_METHOD0(area, float());
};

#endif