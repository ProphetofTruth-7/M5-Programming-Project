/*
 * FactoryWorker Subproject
 * ------------------------------------------------------------
 * This prints the information of four members of a Factory, utilizing inheritance to reduce code strain and increase readability
 *
 * The program relies upon attached Header and .cpp files, and is a OOP work.
 *

 */
#include <iostream>
#include "ShiftSupervisor.h"
#include "TeamLeader.h"
using namespace std;

int main() {
	cout << "Welcome to the Factory Workers Subproject!" << endl;
	cout << endl;

	Employee employee("Jane Doe", 123456, "01/01/2020");
	employee.printInfo();
	cout << endl;

	ProductionWorker productionworker("Steven Dell", 103469, "04/23/2025", 1, 12.50);
	productionworker.printProductionInfo();
	cout << endl;

	ShiftSupervisor shiftsupervisor("Laia Stepah", 384429, "04/02/2007", 50000, 1000);
	shiftsupervisor.printSupervisorInfo();

	TeamLeader teamleader("John Madden", 348392, "09/24/2020", 1, 24, 50, 20, 18);
	teamleader.printLeaderInfo();


	
	return 0;
}
