#ifndef BASICSHAPE_H
#define BASICSHAPE_H
#include <string>

// This is the Header File, containing Prototypes for all Member Functions and the Class itself //

class BasicShape {
private:
	double area;
	std::string name;
protected:
	void setArea(double x);
	void setName(std::string x);
public:
	BasicShape(std::string n, double a);

	virtual ~BasicShape();

	virtual void calcArea();

	double getArea() const;
	const std::string getName() const;

};
#endif
