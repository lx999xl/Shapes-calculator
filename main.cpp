#include "Triangle.h"

int main()
{
	Triangle* aTriangle;
	aTriangle = new Triangle(2, 2, 2);
	cout << aTriangle->getArea();
	aTriangle->showFormula();
}