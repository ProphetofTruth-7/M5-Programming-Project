// This is the Basic Shapes Subbranch!
using namespace std;
#include <string>
#include <iostream>

class BasicShape {
private:
	double area;
	string name;
public:
	BasicShape(string n, double a) : name(n), area(a) {}

	virtual void calcArea() = 0;

	double getArea() {
		return area;
	}
	string getName() {
		return name;
	}

	void setArea(double x) {
		area = x;
	}
	void setName(string x) {
		name = x;
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

	void calcArea() {
		double a = length * width;
		setArea(a);
	}

	double getLength() {
		return length;
	}
	double getWidth() {
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

	double getSide() {
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

	void calcArea() {
		const double PI = 3.141592653589;
		double a = PI * (radius * radius);
		setArea(a);
	}

	double getxCenter() {
		return xCenter;
	}
	double getyCenter() {
		return yCenter;
	}
	double getRadius() {
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
	cout << "The Area of the Circle is: " << shape.getArea() << endl;

	Rectangle shape2("Rectangle", 0, 5, 9);
	cout << "The Area of the Rectangle is: " << shape2.getArea() << endl;

	Square shape3(5);
	cout << "The Area of the Square is: " << shape3.getArea() << endl;

	return 0;
}