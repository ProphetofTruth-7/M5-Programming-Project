/*
 * FactoryWorker Subproject
 * ------------------------------------------------------------
 * This prints the information of four members of a Factory, utilizing inheritance to reduce code strain and increase readability
 *
 * The program relies upon attached Header and .cpp files, and is a OOP work.
 *

 */
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
	ProductionWorker(string n, int i, string h, int s, double p) : Employee(n, i, h), shift(s), pay(p) {}

	int getShift() {
		return shift;
	}
	double getPay() {
		return pay;
	}

	void setShift(int x) {
		shift = x;
	}
	double setPay(double x) {
		pay = x;
	}

	void printProductionInfo() {
		printInfo();
		cout << "Shift: " << getShift() << endl;
		cout << "Pay: $" << getPay() << endl;
	}
};

class ShiftSupervisor : public Employee {
private:
	double salary;
	double bonus;
public:
	ShiftSupervisor(string n, int i, string h, double s, double b) : Employee(n, i, h), salary(s), bonus(b) {}

	double getSalary() {
		return salary;
	}
	double getBonus() {
		return bonus;
	}

	void setSalary(double x) {
		salary = x;
	}
	double setBonus(double x) {
		bonus = x;
	}

	void printSupervisorInfo() {
		printInfo();
		cout << "Salary: $" << getSalary() << endl;
		cout << "Bonus: $" << getBonus() << endl;
	}
};

class TeamLeader : public ProductionWorker {
private:
	double monthlyBonus;
	double reqTraining;
	double actualTraining;
public:
	TeamLeader(string n, int i, string h, int s, double p, double b, double rt, double at) : ProductionWorker(n, i, h, s, p), monthlyBonus(b), reqTraining(rt), actualTraining(at) {}

	double getMonthlyBonus() {
		return monthlyBonus;
	}
	double getRequiredTraining() {
		return reqTraining;
	}
	double getActualTraining() {
		return actualTraining;
	}

	void setMonthlyBonus(double x) {
		monthlyBonus = x;
	}
	double setRequiredTraining(double x) {
		reqTraining = x;
	}
	double setActualTraining(double x) {
		actualTraining = x;
	}

	void printLeaderInfo() {
		printProductionInfo();
		cout << "Monthly Bonus: $" << getMonthlyBonus() << endl;
		cout << "Required Training Hours: " << getRequiredTraining() << endl;
		cout << "Training Hours Attended: " << getActualTraining() << endl;
	}
};



int main() {
	cout << "Welcome to the Factory Workers Subproject!" << endl;

	TeamLeader emp("John Madden", 348392, "04/02/2007", 1, 24, 50, 20, 18);
	emp.printLeaderInfo();
	
	return 0;
}
