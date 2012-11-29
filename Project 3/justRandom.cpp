#include <iostream>
#include <string>
#include <time.h>

#include "aHistogram.h"

#include "aRandomNumberGenerator.h"

using namespace std;


int main() {

	aRandomNumberGenerator r;
	r.setRange(1, 10);
	
	aHistogram h;

	cout << endl << "The die yielded: " << endl;
	h.setRange (1, 10);
	for (int i = 0; i < 100; i++) {
		h.update( r.generate() );
	}
	h.printHistogram();


	// http://stackoverflow.com/questions/2529617/how-to-stop-c-console-application-from-exiting-immediately
	getchar();getchar();getchar();getchar();getchar();getchar();

	return 0;

}

