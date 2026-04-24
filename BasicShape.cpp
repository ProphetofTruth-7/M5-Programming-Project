#include "BasicShape.h"

	void BasicShape::setArea(double x) {
		area = x;
	}
	void BasicShape::setName(std::string x) {
		name = x;
	}

	BasicShape::BasicShape(std::string n, double a) : name(n), area(a) {}

	double BasicShape::getArea() const {
		return area;
	}
	const std::string BasicShape::getName() const {
		return name;
	}