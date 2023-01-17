#pragma once
#include <iostream>
using namespace std;

class Shape
{
protected:
	string formula;
	double area;
	float perimeter;
	float side;

public:
	Shape() 
	{
		formula = "";
		side = 0;
		area = 0; 
		perimeter = 0; 
	}
	virtual float getArea() = 0;
	virtual float getPerimeter() = 0;
	virtual string showFormula() = 0;
};