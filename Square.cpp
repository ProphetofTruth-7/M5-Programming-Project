#include "square.h"

Square::Square(double s) : Rectangle("Square", 0.0, s, s), side(s) {
	setName("Square");
	calcArea();	
}

double Square::getSide() const {
	return side;
}

void Square::setSide(double x) {
	side = x;
	setLength(x);
	setWidth(x);
	calcArea();
}