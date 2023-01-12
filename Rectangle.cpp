#include "Rectangle.h"

Rectangle::Rectangle()
{
	base = 0;
	side = 0;
}

Rectangle::Rectangle(float aBase, float aSide)
{
	base = aBase;
	side = aSide;
}

float Rectangle::getArea()
{
	area = base * side;
	return area;
}

float Rectangle::getPerimeter()
{
	perimeter = (base * 2) + (side * 2);
	return perimeter;
}

string Rectangle::showFormula()
{
	formula = "\n\nArea de un rectangulo:\n (base * 2) + (lado * 2)\n\n";
	return formula;
}