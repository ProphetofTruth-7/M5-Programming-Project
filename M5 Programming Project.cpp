// This is the Factory Workers Subproject
#include <iostream>
using namespace std;

class Employee {
private:
	string name;
	int id;
	string hireDate;
public:
	Employee(string n, int i, string h) : name(n), id(i), hireDate(h) {}

	string getName() {
		return name;
	}
	string getHireDate() {
		return hireDate;
	}
	int getID() {
		return id;
	}

	void setName(string x) {
		name = x;
	}
	void setHireDate(string x) {
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

class ProductionWorker : public Employee {
private:
	int shift;
	double pay;
public:
	ProductionWorker(int s, double p, string n, int i, string h) : Employee(n, i, h), shift(s), pay(p) {}

	int getShift() {
		return shift;
	}
	double getPay() {
		return pay;
	}

	void setShift(int x) {
		shift = x;
	}
	double getPay(double x) {
		pay = x;
	}

	void printProductionInfo() {
		printInfo();
		cout << "Shift: " << getShift() << endl;
		cout << "Pay: $" << getPay() << endl;
	}
};



int main() {
	cout << "Welcome to the Factory Workers Subproject!" << endl;

	ProductionWorker emp(1, 20.35, "John Madden", 348392, "04/02/2007");
	emp.printProductionInfo();
	
	return 0;
}
