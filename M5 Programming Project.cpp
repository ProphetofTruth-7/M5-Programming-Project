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
#include "Circle.h"
#include "Square.h"


int main() {
	Circle shape("Circle", 0, 5, 6, 10);
	Rectangle shape2("Rectangle", 0, 5, 9);
	Square shape3(5);

	BasicShape* bs1 = &shape;
	BasicShape* bs2 = &shape2;
	BasicShape* bs3 = &shape3;
	shape3.setSide(10); //tests that changing the values affects the area properly

	cout << "The Area of the Circle is: " << bs1->getArea() << endl;
	cout << "The Area of the Rectangle is: " << bs2->getArea() << endl;
	cout << "The Area of the Square is: " << bs3->getArea() << endl;

	return 0;
}