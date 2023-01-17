#pragma once
#include "WithApothem.h"

class Hexagon : public WithApothem
{
public:
    Hexagon();
    Hexagon(float aSide);
    float getArea();
    float getPerimeter();
    string showFormula();
};
