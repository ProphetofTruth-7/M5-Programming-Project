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
	// Constructor //
	Employee(std::string n, int i, std::string h) : name(n), id(i), hireDate(h) {}

	// Function Prototypes/Documentation //
/*
* getName
* ------------------------------------------------------------
* Retrieves the stored name of the Employee and returns it
*
* Inputs:
*   None
* Outputs:
*   name          - The name of the Employee
*
* Preconditions:
*   - name is already stored as a valid string
*
* Postconditions:
*   - getName returns the stored name to the call point
*/
	std::string getName() {}
/*
* getHireDate
* ------------------------------------------------------------
* Retrieves the stored hire date of the Employee and returns it
*
* Inputs:
*   None
* Outputs:
*   hireDate          - The hire date of the Employee
*
* Preconditions:
*   - hireDate is already stored as a valid string
*
* Postconditions:
*   - getHireDate returns the stored date to the call point
*/
	std::string getHireDate() {}
/*
* getID
* ------------------------------------------------------------
* Retrieves the stored ID of the Employee and returns it
*
* Inputs:
*   None
* Outputs:
*   id          - The private ID variable of the Employee
*
* Preconditions:
*   - id is already stored as a valid int
*
* Postconditions:
*   - getID returns the stored ID to the call point
*/
	int getID() {}

/*
* setName
* ------------------------------------------------------------
* Mutates the current value of name to the value of x
*
* Inputs:
*   x		    - A valid string value that is the new Name of the Employee
* Outputs:
*   name        - The private name variable of the Employee
*
* Preconditions:
*   - x is a value string value
*
* Postconditions:
*   - name is changed to reflect the given x value
*/
	void setName(std::string x) {}
/*
* setHireDate
* ------------------------------------------------------------
* Mutates the current value of hireDate to the value of x
*
* Inputs:
*   x		    - A valid string value that is the new Hire Date of the Employee
* Outputs:
*   hireDate    - The private hireDate variable of the Employee
*
* Preconditions:
*   - x is a value string value
*
* Postconditions:
*   - hireDate is changed to reflect the given x value
*/
	void setHireDate(std::string x) {}
/*
* setID
* ------------------------------------------------------------
* Mutates the current value of id to the value of x
*
* Inputs:
*   x		    - A valid int value that is the new ID of the Employee
* Outputs:
*   id          - The ID of the Employee
*
* Preconditions:
*   - x is a value int value
*
* Postconditions:
*   - id is changed to reflect the given x value
*/
	void setID(int x) {}

/*
* printInfo
* ------------------------------------------------------------
* Prints a collated report containing the name, ID, and hire date of the Employee
*
* Inputs:
*   None
* Outputs:
*   Collated Report          - A report that contains the name, ID, and hire date of the Employee
*
* Preconditions:
*   - name, ID, and hireDate are already stored as valid values
*
* Postconditions:
*   - A collated report is printed
*/
	void printInfo() {}
};

#endif

