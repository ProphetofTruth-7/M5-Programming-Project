#ifndef CIRCLE_H
#define CIRCLE_H
#include "BasicShape.h"

class Circle : public BasicShape {
private:
	double xCenter;
	double yCenter;
	double radius;
public:
	Circle(std::string n, double a, double x, double y, double r);

	void calcArea() override;

	double getxCenter() const;
	double getyCenter() const;
	double getRadius() const;

	void setxCenter(double x);
	void setyCenter(double x);
	void setRadius(double x);
};

#endif