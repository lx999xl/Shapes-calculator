#pragma once
#include <iostream>
using namespace std;

class Shape
{
protected:
	float area;
	float perimeter;
	float size;

public:
	Shape() 
	{
		area = 0; 
		perimeter = 0; 
		size = 0;
	}
	virtual float getArea() = 0;
	virtual void getPerimeter() = 0;
	virtual void showFormula() = 0;
};