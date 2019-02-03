#include "Tablet.h"
#include <cstdlib>
#include <ctime>

Tablet::Tablet() : Computer() {
	this->setTouchScreenQuality('n');
	srand((unsigned int)time(0));
	this->hiddenID = (rand() % 10);
}

Tablet::Tablet(std::string manufacturer, int memory, char touchScreenQuality) : Computer(manufacturer, memory) {
	this->setTouchScreenQuality(touchScreenQuality);
	srand((unsigned int)time(0));
	this->hiddenID = (rand() % 10);
}

void Tablet::setTouchScreenQuality(char quality) {
	//touchScreenQuality = tolower(touchScreenQuality);
	if (quality == 'g' || quality == 'b' || quality == 'n') {
		this->touchScreenQuality = quality;
		return;
	}
	this->touchScreenQuality = 'n';
}

 char Tablet::getTouchScreenQuality() {
	return this->touchScreenQuality;
}

std::string Tablet::info() {
	std::string result = this->Computer::info();
	result += ", touchScreenQuality (n = nominal, b = bad, g = great) = ";// +(char)this->getTouchScreenQuality();
	result += this->getTouchScreenQuality();
	return result;
}

int Tablet::runProgram() {
	return 45;
}

int hiddenId(const Tablet& other) {
	return other.hiddenID;
}


void Tablet::declareBetterness(Laptop other) {
	std::cout << "tablets don't need to save their max rotation angle! " <<
		"They are always at 360, and they think that's better.  See compare to this laptop: " <<
		std::to_string(other.maxRotationAngle);
	return;
}