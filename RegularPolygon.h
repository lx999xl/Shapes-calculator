#pragma once
#include "WithApothem.h"

class RegularPolygon : public WithApothem
{
private:
    int n;
public:
    RegularPolygon();
    RegularPolygon(float aSide, float aApothem, int nSides);
    float getArea();
    float getPerimeter();
    string showFormula();
};
