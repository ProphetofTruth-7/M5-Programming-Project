#ifndef SHIFTSUPERVISORHEADER_H
#define SHIFTSUPERVISORHEADER_H
#include "Employee.h"

class ShiftSupervisor : public Employee {
private:
	double salary;
	double bonus;
public:
	ShiftSupervisor(std::string n, int i, std::string h, double s, double b) : Employee(n, i, h), salary(s), bonus(b) {}

	double getSalary() {}
	double getBonus() {}

	void setSalary(double x) {}
	double setBonus(double x) {}

	void printSupervisorInfo() {}
};

#endif
