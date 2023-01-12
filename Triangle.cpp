#include "Triangle.h"

Triangle::Triangle()
{
	size = 0;
	base = 0;
	height = 0;
} 

Triangle::Triangle(float aSize, float aBase, float aHeight)
{
	size = aSize;
	base = aBase;
	height = aHeight;
}

float Triangle::getArea()
{
	area = (base * height) / 2;
	return area;
}

void Triangle::getPerimeter()
{
	perimeter = size * 3;
}

void Triangle::showFormula()
{
	cout << "\n\nArea = (base * altura) / 2";
}
