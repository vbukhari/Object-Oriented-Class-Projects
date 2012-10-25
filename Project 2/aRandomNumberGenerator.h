// http://en.wikipedia.org/wiki/Include_guard#Use_of_.23include_guards
#ifndef ARANDOMNUMBERGENERATOR_GUARD
#define ARANDOMNUMBERGENERATOR_GUARD

#include <iostream>
#include <string>
#include <time.h>

using namespace std;

class aRandomNumberGenerator {

public:
	// constructor: sets the low, high and seeds rand
	aRandomNumberGenerator(int, int);

	void setHigh(int); 
	void setLow(int);
	void setRange(int, int);
	int getHight();
	// generate random numbers between low and high
	int generate();
private:
	int low;
	int high;
};

#endif