#include "aRandomNumberGenerator.h"

class aDie : public aRandomNumberGenerator {
public:
	aDie();
	int throwDie() const;
};