#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <string>
#include "BasicShape.h"

class Rectangle : public BasicShape {
private:
	double length;
	double width;
public:
	Rectangle(std::string n, double a, double l, double w);

	void calcArea() override;

	double getLength() const;
	double getWidth() const;

	void setLength(double x);
	void setWidth(double x);

};

#endif
