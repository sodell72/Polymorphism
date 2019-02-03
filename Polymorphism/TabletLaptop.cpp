#include "TabletLaptop.h"

TabletLaptop::TabletLaptop() : Laptop(), Tablet() {
	this->setHasDetachableKeyboard(true);
}

TabletLaptop::TabletLaptop(std::string manufacturer, int memory, double maxRotationAngle, char touchScreenQuality, bool hasDetachableKeyboard) :
	Computer(manufacturer, memory), Tablet(manufacturer, memory, touchScreenQuality), Laptop(manufacturer, memory, maxRotationAngle) {
	this->setHasDetachableKeyboard(hasDetachableKeyboard);
}

void TabletLaptop::setHasDetachableKeyboard(bool hasDetachableKeyboard) {
	this->hasDetachableKeyboard = hasDetachableKeyboard;
}

bool TabletLaptop::getHasDetachableKeyboard() {
	return this->hasDetachableKeyboard;
}

std::string TabletLaptop::info() {
	std::string result = this->Laptop::info();
	result += ", touchScreenQuality (n = nominal, b = bad, g = great) = " + std::to_string(this->getTouchScreenQuality());
	result += ", this laptopTablet hasDetachableKeyboard =  " + std::to_string(this->getHasDetachableKeyboard());
	return result;
}

int TabletLaptop::runProgram() {
	return 999;
}
