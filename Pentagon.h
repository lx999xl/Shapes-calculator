#pragma once
#include "WithApothem.h"

class Pentagon : public WithApothem
{
public:
    Pentagon();
    Pentagon(float aSide);
    float getArea();
    float getPerimeter();
    string showFormula();
};