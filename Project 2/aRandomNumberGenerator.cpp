#include <iostream>
#include <string>
#include <time.h>
#include "aRandomNumberGenerator.h"
#include "aHistogram.h"
using namespace std;
aRandomNumberGenerator::aRandomNumberGenerator(void)
{
}


aRandomNumberGenerator::~aRandomNumberGenerator(void)
{
}
aRandomNumberGenerator::aRandomNumberGenerator(int l, int h){
	this->setHighNum(h);
	this->setLowNum(l);
	srand(time(NULL));
}
void aRandomNumberGenerator::setHighNum(int h) {
	this->high = h;
}
int aRandomNumberGenerator::getHighNum() {
	return this->high;
}

void aRandomNumberGenerator::setLowNum(int l){
	this->low = l;
}
int aRandomNumberGenerator::getLowNum() {
	return this->low;
}


int aRandomNumberGenerator::aRandomNumberGenerator::generate(){

	int num;
	num = (rand() % high)+1;
	if(num<low){
		num+=low;
	}
	return num;
}