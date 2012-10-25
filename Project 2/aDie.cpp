#include "aDie.h"

aDie::aDie() : aRandomNumberGenerator(1,6) {
};
int aDie::Throw() {
	return  aRandomNumberGenerator::generate();
};
