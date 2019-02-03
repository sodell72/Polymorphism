#pragma once
#include "Laptop.h"
#include "Tablet.h"
class TabletLaptop : public Tablet, Laptop {


private:

	bool hasDetachableKeyboard;


public:

	TabletLaptop();
	TabletLaptop(std::string, int, double, char, bool);

	void setHasDetachableKeyboard(bool);

	std::string info();
	int runProgram() override;

	bool getHasDetachableKeyboard();
};