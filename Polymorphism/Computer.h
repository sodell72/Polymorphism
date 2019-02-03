#pragma once
#include <string>


class Computer {

private:
	int memory;
	std::string manufacturer;

public:

	Computer();
	Computer(std::string, int memory=8);
	
	int getMemory();
	std::string getManufacturer();
	void setMemory(int);
	void setManufacturer(std::string);

	virtual std::string info();

	virtual int runProgram() = 0;

};