#pragma once
#include "Shape.h"

class WithBaseAndHeight : public Shape
{
protected:
	float base;
	float height;

public:
	WithBaseAndHeight()
	{
		base = 0;
		height = 0;
	}
};