#include "Computer.h"

Computer::Computer() {
	this->setMemory(8);
	this->setManufacturer("Dell");
}

Computer::Computer(std::string manufacturer, int memory) {
	this->setMemory(memory);
	this->setManufacturer(manufacturer);
}

int Computer::getMemory() {
	return this->memory;
}

std::string Computer::getManufacturer() {
	return this->manufacturer;
}

void Computer::setMemory(int memory) {
	if (memory >= 0) {
		this->memory = memory;
	} else {
		this->memory = 0;
	}
	return;
}

void Computer::setManufacturer(const std::string manufacturer) {
	if (!(manufacturer.find_first_not_of("123456789") == std::string::npos)) {
		this->manufacturer = manufacturer;
	}
	return;
}

std::string Computer::info() {
	std::string info = "memory = " + std::to_string(this->getMemory()) + ", " +
		"manufacturer = " + this->getManufacturer();
	return info;
}

