#include <iostream>
#include <string>
#include<time.h>

using namespace std;

class aRandomNumberGenerator {

	public:
		// constructor: sets the low, high and seeds rand
		aRandomNumberGenerator(int, int);

		void setHigh(int); 
		void setLow(int);
		void setRange(int, int);
		int aRandomNumberGenerator::getHight();
		// generate random numbers between low and high
		int aRandomNumberGenerator::generate();
	private:
		int low;
		int high;
};


class Tracker {

	public:
		//Using this constructor, initializing count array
		Tracker();
	
		// the function counts repeated random number
		void trackInt(int);	
		// the function returns the number of time the random number has generated
		int getCount(int );
		// the function print out histogram along with number of time random number generated.
		void printHistogram(int, int);
	private:
		int count[9];
};
