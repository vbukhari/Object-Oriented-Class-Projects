#include "aCoin.h"

aCoin::aCoin() : aRandomNumberGenerator(1,2) {
};
int aCoin::Flip() {
	return  aRandomNumberGenerator::generate();
};
