#include "Employee.h"


Employee::Employee(std::string n, int i, std::string h) : name(n), id(i), hireDate(h) {}
	
std::string Employee::getName() {
	return name;
}
std::string Employee::getHireDate() {
	return hireDate;
}
int Employee::getID() {
	return id;
}

void Employee::setName(std::string x) {
	name = x;
}
void Employee::setHireDate(std::string x) {
	hireDate = x;
}
void Employee::setID(int x) {
	id = x;
}


void Employee::printInfo() {
	std::cout << "Employee Name: " << getName() << std::endl;
	std::cout << "Employee ID: " << getID() << std::endl;
	std::cout << "Employee Hire Date: " << getHireDate() << std::endl;
}


