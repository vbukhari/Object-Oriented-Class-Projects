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
int aRandomNumberGenerator::getHighNumber() const {
	return high;
}
int aRandomNumberGenerator::getLowNumber() const{
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
int aRandomNumberGenerator::generate() const{
	int num;
	num = (rand() % high)+1;
	if(num<low){
		num+=low;
	}
	return num;
}
