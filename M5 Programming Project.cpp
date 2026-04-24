/*
 * Basic Shape Class Subproject
 * ------------------------------------------------------------
 * This program creates a series of derived shape classes and calculates their areas.
 * 
 * It then prints those values in a collated report.
 *
 * The program relies upon attached Header and .cpp files, and is a OOP work. It relies heavily on Polymorphism and the use of Virtual Functions and Inheritance
 *

 */
using namespace std;
#include <string>
#include <iostream>

class BasicShape {
private:
	double area;
	string name;
protected:
	void setArea(double x) {
		area = x;
	}
	void setName(string x) {
		name = x;
	}
public:
	BasicShape(string n, double a) : name(n), area(a) {}

	virtual ~BasicShape() {}

	virtual void calcArea() = 0;

	double getArea() const {
		return area;
	}
	const string getName() const {
		return name;
	}

};

class Rectangle : public BasicShape {
private:
	double length;
	double width;
public:
	Rectangle(string n, double a, double l, double w) : BasicShape("Rectangle", 0), length(l), width(w) {
		setName("Rectangle");
		calcArea();
	}

	void calcArea() override {
		double a = length * width;
		setArea(a);
	}

	double getLength() const {
		return length;
	}
	double getWidth() const {
		return width;
	}

	void setLength(double x) {
		length = x;
		calcArea();
	}
	void setWidth(double x) {
		width = x;
		calcArea();
	}

};

class Square : public Rectangle {
private:
	double side;
public:
	Square(double s) : Rectangle("Square", 0.0, s, s), side(s) {
		setName("Square");
		calcArea();
	}

	double getSide() const {
		return side;
	}

	void setSide(double x) {
		side = x;
		setLength(x);
		setWidth(x);
		calcArea();
	}

};

class Circle : public BasicShape {
private:
	double xCenter;
	double yCenter;
	double radius;
public:
	Circle(string n, double a, double x, double y, double r) : BasicShape("Circle", 0), xCenter(x), yCenter(y), radius(r) {
		setName("Circle");
		calcArea();
	}

	void calcArea() override {
		const double PI = 3.141592653589;
		double a = PI * (radius * radius);
		setArea(a);
	}

	double getxCenter() const {
		return xCenter;
	}
	double getyCenter() const {
		return yCenter;
	}
	double getRadius() const {
		return radius;
	}

	void setxCenter(double x) {
		xCenter = x;
	}
	void setyCenter(double x) {
		yCenter = x;
	}
	void setRadius(double x) {
		radius = x;
		calcArea();
	}
};


int main() {
	Circle shape("Circle", 0, 5, 6, 10);
	Rectangle shape2("Rectangle", 0, 5, 9);
	Square shape3(5);

	BasicShape* bs1 = &shape;
	BasicShape* bs2 = &shape2;
	BasicShape* bs3 = &shape3;
	shape3.setSide(10);

	cout << "The Area of the Circle is: " << bs1->getArea() << endl;
	cout << "The Area of the Rectangle is: " << bs2->getArea() << endl;
	cout << "The Area of the Square is: " << bs3->getArea() << endl;

	return 0;
}