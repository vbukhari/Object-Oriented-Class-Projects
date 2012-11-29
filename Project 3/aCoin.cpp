#include "aCoin.h"

aCoin::aCoin() : aRandomNumberGenerator(1,2) {
};
int aCoin::flipCoin() const {
	return  aRandomNumberGenerator::generate();
};
