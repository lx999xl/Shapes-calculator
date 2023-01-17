#include "Menu.h"

void Menu::start()
{
	setlocale(LC_ALL, "");

	Triangle* triangle = new Triangle(2, 2, 2);
	Square* square = new Square(4);
	Rectangle* rectangle = new Rectangle(6, 3);
	Pentagon* pentagon = new Pentagon(5);
	Hexagon* hexagon = new Hexagon(6);
	RegularPolygon* regularpolygon = new RegularPolygon(8,6,5);

	cout << triangle->getArea();
	cout << triangle->showFormula();

	cout << square->getArea();
	cout << square->showFormula();

	cout << "El area de este rectangulo es: " << rectangle->getArea();
	cout << rectangle->showFormula();

	cout << "El area del pentagono es: " << pentagon->getArea();
	cout << pentagon->showFormula();

	cout << "El area del hexagono es: " << hexagon->getArea();
	cout << hexagon->showFormula();

	cout << "El area del poligono regular es: " << regularpolygon->getArea();
	cout << regularpolygon->showFormula();
}