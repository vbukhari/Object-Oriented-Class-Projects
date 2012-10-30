#include <iostream>
#include <string>
#include <time.h>

#include "aDie.h"
#include "aCoin.h"
#include "aHistogram.h"

using namespace std;


int main() {

	int timesToThrowDie, timesToFlipCoin;

	aCoin c;
	aDie d;
	aHistogram h;

	cout << "Enter the number of times to flip the coin: ";
	cin >> timesToFlipCoin;
	cout << "Enter the number of times to throw the die: ";
	cin >> timesToThrowDie;

	cout << endl << "The coin yielded: " << endl;
	h.setRange(1,2);
	for (int i = 0; i < timesToFlipCoin; i++) {
		h.update( c.flipCoin() );
	}
	h.printHistogram();

	h.clear();

	cout << endl << "The die yielded: " << endl;
	h.setRange (1, 6);
	for (int i = 0; i < timesToThrowDie; i++) {
		h.update( d.throwDie() );
	}
	h.printHistogram();


	// http://stackoverflow.com/questions/2529617/how-to-stop-c-console-application-from-exiting-immediately
	getchar();getchar();getchar();getchar();getchar();getchar();

	return 0;

}