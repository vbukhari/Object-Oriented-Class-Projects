#include "aDie.h"

aDie::aDie() : aRandomNumberGenerator(1,6) {
};
int aDie::throwDie() const {
	return  aRandomNumberGenerator::generate();
};
