#include "Circle.h"

Circle::Circle(std::string n, double a, double x, double y, double r) : BasicShape("Circle", 0), xCenter(x), yCenter(y), radius(r) {
	setName("Circle");
	calcArea();
}

void Circle::calcArea() {
	const double PI = 3.141592653589;
	double a = PI * (radius * radius);
	setArea(a);
}

double Circle::getxCenter() const {
	return xCenter;
}
double Circle::getyCenter() const {
	return yCenter;
}
double Circle::getRadius() const {
	return radius;
}

void Circle::setxCenter(double x) {
	xCenter = x;
}
void Circle::setyCenter(double x) {
	yCenter = x;
}
void Circle::setRadius(double x) {
	radius = x;
	calcArea();
}