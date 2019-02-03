#include <iostream>
#include "Computer.h"
#include "Laptop.h"
#include "main.h"
#include "Tablet.h"
#include "TabletLaptop.h"

using namespace std;

// to run program, double click on executable.

int main(int argc, char* argv[]) {

	// testing laptop public methods and functional positive testing
	Laptop myLaptop;
	Laptop myLaptop2("Asus", 32, 97.6);
	cout << "myLaptop created with a Default constructor is manufactured by Dell: " << myLaptop.getManufacturer() << endl <<
		", and has 8gigs of memory: " << myLaptop.getMemory() << endl <<
		", and has a max screen rotation angle of 90deg: " << myLaptop.getMaxRotationAngle() << endl;
	cout << endl;
	cout << "myLaptop2 constructor is manufactured by Asus: " << myLaptop2.getManufacturer() << endl <<
		", and has 32gigs of memory: " << myLaptop2.getMemory() << endl <<
		", and has a max screen rotation angle of 97.6deg: " << myLaptop2.getMaxRotationAngle() << endl;
	cout << endl;
	myLaptop.setManufacturer("Mac");
	myLaptop.setMaxRotationAngle(99.22);
	myLaptop.setMemory(4);
	cout << "myLaptop parameters changed using set results in manufactured by Mac: " << myLaptop.getManufacturer() << endl <<
		", and has 4gigs of memory: " << myLaptop.getMemory() << endl <<
		", and has a max screen rotation angle of 99.22deg: " << myLaptop.getMaxRotationAngle() << endl;
	cout << endl;
	cout << "Info for myLaptop: " << myLaptop.info() << endl;
	cout << endl;
	cout << "Result for runProgram for myLaptop: " << std::to_string(myLaptop.runProgram());

	cout << endl << endl << endl;

	// testing tablet public methods and functional positive testing
	Tablet myTablet;
	Tablet myTablet2("Asus", 32, 'g');
	cout << "myTablet created with a Default constructor is manufactured by Dell: " << myTablet.getManufacturer() << endl <<
		", and has 8gigs of memory: " << myTablet.getMemory() << endl <<
		", and has a screenQuality of n: " << myTablet.getTouchScreenQuality() << endl;
	cout << endl;
	cout << "myTablet2 constructor is manufactured by Asus: " << myTablet2.getManufacturer() << endl <<
		", and has 32gigs of memory: " << myTablet2.getMemory() << endl <<
		", and has a touch screen quality of g: " << myTablet2.getTouchScreenQuality() << endl;
	cout << endl;
	myTablet.setManufacturer("Mac");
	myTablet.setTouchScreenQuality('b');
	myTablet.setMemory(4);
	cout << "myLaptop parameters changed using set results in manufactured by Mac: " << myTablet.getManufacturer() << endl <<
		", and has 4gigs of memory: " << myTablet.getMemory() << endl <<
		", and has a touch screen quality of b: " << myTablet.getTouchScreenQuality() << endl;
	cout << endl;
	cout << "Info for myTablet: " << myTablet.info() << endl;
	cout << endl;
	cout << "Result for runProgram for myTablet: " << std::to_string(myTablet.runProgram());
	cout << endl << endl << endl;

	// testing friend function
	cout << "the private value can be found using the friend function: " << ::to_string(hiddenId(myTablet)) << endl;
	cout << endl;
	// test friend class using function to access private variable
	myTablet.declareBetterness(myLaptop);
	cout << endl;

	// testing tabletLaptop public methods and functional positive testing
	TabletLaptop myTabletLaptop;
	TabletLaptop myTabletLaptop2("Asus", 32, 97.6, 'g', false);
	cout << "myTabletLaptop created with a Default constructor is manufactured by Dell: " << myTabletLaptop.getManufacturer() << endl <<
		", and has 8gigs of memory: " << myTabletLaptop.getMemory() << endl <<
		", and has a screenQuality of n: " << myTabletLaptop.getTouchScreenQuality() << endl;
	cout << endl;
	cout << "myTabletLaptop2 constructor is manufactured by Asus: " << myTabletLaptop2.getManufacturer() << endl <<
		", and has 32gigs of memory: " << myTabletLaptop2.getMemory() << endl <<
		", and has a touch screen quality of g: " << myTabletLaptop2.getTouchScreenQuality() << endl;
	cout << endl;
	myTabletLaptop.setManufacturer("Mac");
	myTabletLaptop.setTouchScreenQuality('b');
	myTabletLaptop.setMemory(4);
	myTabletLaptop.setHasDetachableKeyboard(false);
	cout << "myLaptop parameters changed using set results in manufactured by Mac: " << myTabletLaptop.getManufacturer() << endl <<
		", and has 4gigs of memory: " << myTabletLaptop.getMemory() << endl <<
		", and has a touch screen quality of b: " << myTabletLaptop.getTouchScreenQuality() << endl;
	cout << endl;
	cout << "myTabletLaptop hasDetachable laptop is false = " << myTabletLaptop.getHasDetachableKeyboard() << endl;
	cout << endl;
	cout << "Info for myTabletLaptop: " << myTabletLaptop.info() << endl;
	cout << endl;
	cout << "Result for runProgram for myTabletLaptop: " << std::to_string(myTabletLaptop.runProgram());
	cout << endl << endl << endl;

	// functional negative testing: default values are given if incorrect data range passed.
	Laptop badLaptop("1111", -1, 20);
	cout << "results for bad input to laptop are: " << badLaptop.info() << endl;
	Tablet badTablet("1111", -1, 't');
	cout << "results for bad input to tablet are: " << badTablet.info() << endl;
	// bool can only take 1 or 0 for input otherwise type error during compile so it is not input as a "bad" input.
	TabletLaptop badTabletLaptop("1111", -1, 20, 't', 0);
	cout << "results for bad input to tabletLaptop are: " << badTabletLaptop.info() << endl;

	cin.get();
	return 1;
}