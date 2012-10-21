#include <iostream>
#include <string>
#include "aRandomNumberGenerator.h"

using namespace std;

int main() {

	Tracker t;
	aRandomNumberGenerator r(1,9);

	for (int i = 0; i < 9000; i++) {	
		int randomNumber = r.generate();
		t.trackInt(randomNumber);
	}
	cout << endl;
	t.printHistogram();

	return 0;
}