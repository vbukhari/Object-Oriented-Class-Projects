#include <iostream>
#include <string>
#include <time.h>
#include "aDie.h"
#include "aCoin.h"
#include "aHistogram.h"

using namespace std;


int main() {

	aHistogram h;
	h.setRange (1, 3);
	h.update(1);
	h.update(1);
	h.update(2);
	h.printHistogram();
	
	cout << endl << endl;

	h.setRange (4, 7);
	h.update(4);
	h.update(4);
	h.update(4);
	h.update(4);
	h.update(4);
	h.update(7);
	h.update(7);
	h.update(7);
	h.update(7);
	h.update(7);
	h.update(7);
	h.update(7);
	h.update(7);
	h.update(7);
	h.update(7);
	h.printHistogram();


	// http://stackoverflow.com/questions/2529617/how-to-stop-c-console-application-from-exiting-immediately
	getchar();
	return 0;
}