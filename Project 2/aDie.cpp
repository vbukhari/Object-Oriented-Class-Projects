#include "aDie.h"

//aDie::aDie(){};
aDie::~aDie(){};

aDie::aDie() : aRandomNumberGenerator(1,6) {
};
int aDie::throwDie() {
	return  aRandomNumberGenerator::generate();
};