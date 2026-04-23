#ifndef EMPLOYEEHEADER_H
#define EMPLOYEEHEADER_H
#include <string>

// This is the Header File, containing Prototypes for all Member Functions and the PoliceOfficer Class itself //
class Employee {
private:
	std::string name;
	int id;
	std::string hireDate;
public:
	Employee(std::string n, int i, std::string h) : name(n), id(i), hireDate(h) {}
	std::string getName() {
		return name;
	}
	std::string getHireDate() {
		return hireDate;
	}
	int getID() {
		return id;
	}

	void setName(std::string x) {
		name = x;
	}
	void setHireDate(std::string x) {
		hireDate = x;
	}
	void setID(int x) {
		id = x;
	}


	void printInfo() {
		cout << "Employee Name: " << getName() << endl;
		cout << "Employee ID: " << getID() << endl;
		cout << "Employee Hire Date: " << getHireDate() << endl;
	}
};

#endif
