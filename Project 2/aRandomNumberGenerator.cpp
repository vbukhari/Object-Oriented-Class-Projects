#include <iostream>
#include <string>
#include <time.h>
#include "aRandomNumberGenerator.h"
using namespace std;

aRandomNumberGenerator::aRandomNumberGenerator(int l, int h){
	setRange(l, h);
	srand(time(NULL));
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
int aRandomNumberGenerator::aRandomNumberGenerator::generate(){

	int mod = (high - low) +1;
	int num = (rand() % mod);

	return num + 1;
}