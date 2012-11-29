#include "aRandomNumberGenerator.h"

class aCoin : public aRandomNumberGenerator {
public:
	aCoin();
	int flipCoin() const;
};