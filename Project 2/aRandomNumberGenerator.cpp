#include <iostream>
#include <string>
#include <time.h>
#include "aRandomNumberGenerator.h"
#include "aHistogram.h"

using namespace std;

// constructor: sets the low, high and seeds rand
aRandomNumberGenerator::aRandomNumberGenerator(int l, int h){
	setRange(l, h);
	// seed rand with the current timestamp
	srand((unsigned int)time(NULL));
}
int aRandomNumberGenerator::getHight(){
	return this->high;
}
void aRandomNumberGenerator::setHigh(int h) {
	high = h;
}
void aRandomNumberGenerator::setLow(int l){
	low = l;
}
void aRandomNumberGenerator::setRange(int l, int h) {
	setLow(l);
	setHigh(h);
}
// generate random numbers between low and high
int aRandomNumberGenerator::generate(){
	//int mod = (high - low) +1;
	int num;
	num = (rand() % high)+1;
	if(num<low){
		num+=low;
	}
	return num;
}
