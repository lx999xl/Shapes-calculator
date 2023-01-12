#include "Triangle.h"

Triangle::Triangle()
{
	side = 0;
	base = 0;
	height = 0;
} 

Triangle::Triangle(float aSide, float aBase, float aHeight)
{
	side = aSide;
	base = aBase;
	height = aHeight;
}

float Triangle::getArea()
{
	area = (base * height) / 2;
	return area;
}

float Triangle::getPerimeter()
{
	perimeter = side * 3;
	return perimeter;
}

string Triangle::showFormula()
{
	formula = "\n\nArea de un triangulo:\n(base * altura) / 2\n\n";
	return formula;
}
