#include "Hexagon.h"
#include<cmath>

Hexagon::Hexagon()
{
    side = 0;
}

Hexagon::Hexagon(float aSide)
{
    side = aSide;
}

float Hexagon::getArea()
{
    area = (3 * sqrtf(3) * side * side) / 2;
    return area;
}

float Hexagon::getPerimeter()
{
    perimeter = 6 * side;
    return perimeter;
}

string Hexagon::showFormula()
{
    formula = "\n\nArea de un hex�gono:\n(3*sqrt(3)*lado*lado)/2\n\nPer�metro de un hex�gono:\n6*lado\n\n";
    return formula;
}
