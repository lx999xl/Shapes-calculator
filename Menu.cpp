#include "Menu.h"

void Menu::start()
{
	Triangle* triangle = new Triangle(2, 2, 2);
	cout << triangle->getArea();
	triangle->showFormula();
}