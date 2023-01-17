#include "RegularPolygon.h"
#include<cmath>

RegularPolygon::RegularPolygon()
{
    side = 0;
    apothem = 0;
    n = 0;
}

RegularPolygon::RegularPolygon(float aSide, float aApothem, int nSides)
{
    side = aSide;
    apothem = aApothem;
    n = nSides;
}

float RegularPolygon::getArea()
{
    area = (n * side * apothem) / 2;
    return area;
}

float RegularPolygon::getPerimeter()
{
    perimeter = n * side;
    return perimeter;
}

string RegularPolygon::showFormula()
{
    formula = "\n\nArea de un pol�gono regular:\n(n*lado*apotema)/2\n\nPer�metro de un pol�gono regular:\nn*lado\n\n";
    return formula;
}
