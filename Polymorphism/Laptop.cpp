#include "Laptop.h"

Laptop::Laptop() : Computer() {
	this->setMaxRotationAngle(90);
}

Laptop::Laptop(std::string manufacturer, int memory, double maxRotationAngle) : Computer(manufacturer, memory) {
	this->setMaxRotationAngle(maxRotationAngle);
}

void Laptop::setMaxRotationAngle(double maxRotationAngle) {
	if (maxRotationAngle < 90 || maxRotationAngle > 360) {
		maxRotationAngle = 90;
	}
	this->maxRotationAngle = maxRotationAngle;
}

double Laptop::getMaxRotationAngle() {
	return this->maxRotationAngle;
}

std::string Laptop::info() {
	std::string result = this->Computer::info();
	result += ", maxRotationAngle = " + std::to_string(this->getMaxRotationAngle());
	return result;
}

int Laptop::runProgram() {
	return 42;
}

