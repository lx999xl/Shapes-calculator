#pragma once
#include "WithBaseAndHeight.h"

class Triangle : public WithBaseAndHeight
{
public:
	Triangle();
	Triangle(float aSize, float aBase, float aHeight);
	float getArea();
	void getPerimeter();
	void showFormula();
};