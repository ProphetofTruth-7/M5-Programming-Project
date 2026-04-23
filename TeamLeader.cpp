#include "TeamLeader.h"

	TeamLeader::TeamLeader(std::string n, int i, std::string h, int s, double p, double b, double rt, double at) : ProductionWorker(n, i, h, s, p), monthlyBonus(b), reqTraining(rt), actualTraining(at) {}

	double TeamLeader::getMonthlyBonus() {
		return monthlyBonus;
	}
	double TeamLeader::getRequiredTraining() {
		return reqTraining;
	}
	double TeamLeader::getActualTraining() {
		return actualTraining;
	}

	void TeamLeader::setMonthlyBonus(double x) {
		monthlyBonus = x;
	}
	void TeamLeader::setRequiredTraining(double x) {
		reqTraining = x;
	}
	void TeamLeader::setActualTraining(double x) {
		actualTraining = x;
	}

	void TeamLeader::printLeaderInfo() {
		std::cout << "Team Leader Information:" << std::endl;
		printProductionInfo();
		std::cout << "Monthly Bonus: $" << getMonthlyBonus() << std::endl;
		std::cout << "Required Training Hours: " << getRequiredTraining() << std::endl;
		std::cout << "Training Hours Attended: " << getActualTraining() << std::endl;
	}