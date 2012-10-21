#include <iostream>
#include <string>
#include <time.h>

using namespace std;

class aRandomNumberGenerator {

	public:
		// constructor: sets the low, high and seeds rand
		aRandomNumberGenerator(int l, int h);
		void setHigh(int h) ;
		void setLow(int l);
		void setRange(int l, int h) ;
		int generate();
		 
	private:
		int low;
		int high;
};


class Histogram {

	public:
		//Using this constructor, initializing count array
		Histogram();
		// the function counts repeated random number
		void trackInt(int n) ;;	
		// the function returns the number of time the random number has generated
		int getCount(int n) ;
		// the function print out histogram along with number of time random number generated.
		void printHistogram();
	private:
		int count[9];
};
