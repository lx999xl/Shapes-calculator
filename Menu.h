#pragma once
#include "Triangle.h"
#include "Square.h"
#include "Rectangle.h"
#include "Pentagon.h"
#include "Hexagon.h"
#include "RegularPolygon.h"

class Menu
{
private:
	Shape* control;

public:
	void start();
};