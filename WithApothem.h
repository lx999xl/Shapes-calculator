#pragma once
#include "Shape.h"

class WithApothem : public Shape
{
protected:
	float apothem;

public:
	WithApothem()
	{
		apothem = 0;
	}
};
