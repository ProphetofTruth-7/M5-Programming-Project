#ifndef PRODUCTIONWORKERHEADER_H
#define PRODUCTIONWORKERHEADER_H
#include "Employee.h"

class ProductionWorker : public Employee {
private:
	int shift;
	double pay;
public:
	ProductionWorker(std::string n, int i, std::string h, int s, double p);

	int getShift();
	double getPay();

	void setShift(int x);
	void setPay(double x);

	void printProductionInfo();
};

#endif