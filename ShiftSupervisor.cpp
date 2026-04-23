#include "ShiftSupervisor.h"

ShiftSupervisor::ShiftSupervisor(std::string n, int i, std::string h, double s, double b) : Employee(n, i, h), salary(s), bonus(b) {}

	double ShiftSupervisor::getSalary() {
		return salary;
	}
	double ShiftSupervisor::getBonus() {
		return bonus;
	}

	void ShiftSupervisor::setSalary(double x) {
		salary = x;
	}
	void ShiftSupervisor::setBonus(double x) {
		bonus = x;
	}

	void ShiftSupervisor::printSupervisorInfo() {
		std::cout << "Shift Supervisor Information:" << std::endl;
		printInfo();
		std::cout << "Salary: $" << getSalary() << std::endl;
		std::cout << "Bonus: $" << getBonus() << std::endl;
	}