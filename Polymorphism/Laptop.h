#pragma once
#include "Computer.h"
//#include "Tablet.h"

class Laptop : virtual public Computer {
	friend class Tablet;

private:
	double maxRotationAngle;


public:
	

	Laptop();
	Laptop(std::string, int, double);

	void setMaxRotationAngle(double);

	double getMaxRotationAngle();

	std::string info() override;

	int runProgram() override;


};