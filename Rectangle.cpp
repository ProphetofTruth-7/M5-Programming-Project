#include "Rectangle.h"
#include <string>

Rectangle::Rectangle(std::string n, double a, double l, double w) : BasicShape("Rectangle", 0), length(l), width(w) {
	setName("Rectangle");
	calcArea();
}

void Rectangle::calcArea() {
	double a = length * width;
	setArea(a);
}

double Rectangle::getLength() const {
	return length;
}
double Rectangle::getWidth() const {
	return width;
}

void Rectangle::setLength(double x) {
	length = x;
	calcArea();
}
void Rectangle::setWidth(double x) {
	width = x;
	calcArea();
}