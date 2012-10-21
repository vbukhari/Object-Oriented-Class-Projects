#include <iostream>
#include <string>
#include "aRandomNumberGenerator.h"

using namespace std;

int main() {

	Histogram h;
	aRandomNumberGenerator r(1,9);

	for (int i = 0; i < 9000; i++) {	
		int randomNumber = r.generate();
		h.trackInt(randomNumber);
	}
	cout << endl;
	h.printHistogram();

	return 0;
}