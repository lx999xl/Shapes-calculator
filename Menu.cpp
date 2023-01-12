#include "Menu.h"

void Menu::start()
{
	Triangle* triangle = new Triangle(2, 2, 2);
	Square* square = new Square(4);
	Rectangle* rectangle = new Rectangle(6, 3);
	
	cout << triangle->getArea();
	cout << triangle->showFormula();

	cout << square->getArea();
	cout << square->showFormula();

	cout << "El area de este rectangulo es: " << rectangle->getArea();
	cout << rectangle->showFormula();
}