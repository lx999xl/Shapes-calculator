#include "Pentagon.h"

Pentagon::Pentagon()
{
    side = 0;
}

Pentagon::Pentagon(float aSide)
{
    side = aSide;
}

float Pentagon::getArea()
{
    area = (side * side) * (5 * (sqrt(5) + 1)) / 4;
    return area;
}

float Pentagon::getPerimeter()
{
    perimeter = 5 * side;
    return perimeter;
}

string Pentagon::showFormula()
{
    formula = "\n\nArea de un pentagono:\n(lado*lado)*(5*(sqrt(5)+1))/4\n\nPerímetro de un pentagono:\n5*lado\n\n";
    return formula;
}
