#ifndef TEAMLEADERHEADER_H
#define TEAMLEADERHEADER_H
#include "ProductionWorker.h"

class TeamLeader : public ProductionWorker {
private:
	double monthlyBonus;
	double reqTraining;
	double actualTraining;
public:
	TeamLeader(std::string n, int i, std::string h, int s, double p, double b, double rt, double at) : ProductionWorker(n, i, h, s, p), monthlyBonus(b), reqTraining(rt), actualTraining(at) {}

	double getMonthlyBonus();
	double getRequiredTraining();
	double getActualTraining();

	void setMonthlyBonus(double x);
	void setRequiredTraining(double x);
	void setActualTraining(double x);

	void printLeaderInfo();
};

#endif
