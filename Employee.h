#ifndef EMPLOYEEHEADER_H
#define EMPLOYEEHEADER_H
#include <string>
#include <iostream>

// This is the Header File, containing Prototypes for all Member Functions and the Employee Class. According to the Instructions, it is the only way to have comments //
class Employee {
private:
	std::string name;
	int id;
	std::string hireDate;
public:
	Employee(std::string n, int i, std::string h) : name(n), id(i), hireDate(h) {}

	std::string getName() {}
	std::string getHireDate() {}
	int getID() {}

	void setName(std::string x) {}
	void setHireDate(std::string x) {}
	void setID(int x) {}


	void printInfo() {}
};

#endif

