#include "Square.h"

Square::Square()
{
	side = 0;
}

Square::Square(float aSide)
{
	side = aSide;
}

float Square::getArea()
{
	area = side * side;
	return area;
}

float Square::getPerimeter()
{
	perimeter = side * 4;
	return perimeter;
}

string Square::showFormula()
{
	formula = "\n\nArea de un cuadrado:\nlado * lado\n\n";
	return formula;
}