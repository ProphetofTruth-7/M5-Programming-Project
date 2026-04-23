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
		cout << "Employee Name: " << name << endl;
		cout << "Employee ID: " << id << endl;
		cout << "Employee Hire Date: " << hireDate << endl;
	}
};



int main() {
	cout << "Welcome to the Factory Workers Subproject!" << endl;

	Employee emp("John Madden", 348392, "04/02/2007");
	emp.printInfo();
	
	return 0;
}
