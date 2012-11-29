// http://en.wikipedia.org/wiki/Include_guard#Use_of_.23include_guards
#ifndef ARANDOMNUMBERGENERATOR_GUARD
#define ARANDOMNUMBERGENERATOR_GUARD

#include <iostream>
#include <string>
#include <time.h>
using namespace std;

class aRandomNumberGenerator {

public:
	/* constructors, the first implies that range will be set later */
	aRandomNumberGenerator();
	aRandomNumberGenerator(int l, int h);

	void setHigh(int h); 
	void setLow(int l);
	void setRange(int l, int h);
	/* lol */
	int getHighNumber() const;
	/* like flo rida */
	int getLowNumber() const;
	/* generate random numbers between low and high */
	int generate() const;

private:
	int low;
	int high;
};

#endif