#include "aRandomNumberGenerator.h"

using namespace std;

aRandomNumberGenerator::aRandomNumberGenerator(int l, int h){
	setRange(l, h);
	srand((unsigned int)time(NULL));
}
aRandomNumberGenerator::aRandomNumberGenerator(){
	/* Dont forget to set the range ! */
	srand((unsigned int)time(NULL));
}
int aRandomNumberGenerator::getHigh(){
	return high;
}
int aRandomNumberGenerator::getLow(){
	return low;
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
int aRandomNumberGenerator::generate(){
	int num;
	num = (rand() % high)+1;
	if(num<low){
		num+=low;
	}
	return num;
}
