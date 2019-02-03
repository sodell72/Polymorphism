#pragma once
#include "Computer.h"
#include "Laptop.h"
#include <iostream>
class Laptop;

class Tablet : virtual public Computer {

private:
	char touchScreenQuality;
	int hiddenID;


public:

	Tablet();
	Tablet(std::string, int, char);

	void setTouchScreenQuality(char);

	char getTouchScreenQuality();

	std::string info() override;

	int runProgram() override;

	friend int hiddenId(const Tablet&);

	void declareBetterness(Laptop);


};

