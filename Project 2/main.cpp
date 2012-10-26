#include <iostream>
#include <string>
#include <time.h>

#include "aDie.h"
#include "aCoin.h"
#include "aHistogram.h"

using namespace std;


int main() {

	aHistogram h;
	h.setRange (1, 6);

	aDie d;
	for (int i = 0; i < 6000; i++) {
		h.update( d.throwDie() );
	}
	h.printHistogram();

	cout << endl << "HELLO COIN!" << endl;

	h.clear();
	h.setRange(1,2);

	aCoin c;
	for (int i = 0; i < 6000; i++) {
		h.update( c.flipCoin() );
	}
	h.printHistogram();

	// http://stackoverflow.com/questions/2529617/how-to-stop-c-console-application-from-exiting-immediately
	getchar();
	return 0;
}

