#include "ProductionWorker.h"


	ProductionWorker::ProductionWorker(std::string n, int i, std::string h, int s, double p) : Employee(n, i, h), shift(s), pay(p) {}

	int ProductionWorker::getShift() {
		return shift;
	}
	double ProductionWorker::getPay() {
		return pay;
	}

	void ProductionWorker::setShift(int x) {
		shift = x;
	}
	double ProductionWorker::setPay(double x) {
		pay = x;
	}

	void ProductionWorker::printProductionInfo() {
		std::cout << "Production Worker Information:" << std::endl;
		printInfo();
		std::cout << "Shift: " << getShift() << std::endl;
		std::cout << "Pay: $" << getPay() << std::endl;
	}