#include <iostream>
#include <string>
#include <time.h>
//#include "aHistogram.h"
#include "aDie.h"
#include "aCoin.h"

using namespace std;


int main() {

	aDie d;
	aCoin c;

	cout << "Throwing the die 6 times: ";
	cout << d.Throw();
	cout << d.Throw();
	cout << d.Throw();
	cout << d.Throw();
	cout << d.Throw();
	cout << d.Throw();
	cout << endl;

	cout << "Throwing the coin 6 times: ";
	cout << c.Flip();
	cout << c.Flip();
	cout << c.Flip();
	cout << c.Flip();
	cout << c.Flip();
	cout << c.Flip();
	cout << endl;

	// http://stackoverflow.com/questions/2529617/how-to-stop-c-console-application-from-exiting-immediately
	getchar();
	return 0;
}