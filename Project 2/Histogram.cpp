#include <iostream>
#include <string>
#include <time.h>
#include "Histogram.h"

using namespace std;

//Using this constructor, initializing count array
Histogram::Histogram() {
	for (int i = 0; i <= 8; i++) {
		count[i] = 0;
	}
}
// the function counts repeated random number
void Histogram::trackInt(int n) {
	count[n - 1]++;
};
// the function returns the number of time the random number has generated
int Histogram::getCount(int n) {
	return count[n-1];
}
// the function print out histogram along with number of time random number generated.
void Histogram::printHistogram(){
	cout <<"Number\t"<< "Appears\t\t" << "Histogram\n"<<endl;
	for(int i=1; i < 9; i++){
		cout << i <<":\t"<< getCount(i)<< "\t\t";
		for(int j=1; j<=(getCount(i)/100); j++){
			cout <<"X";
		}
		cout << endl;
	}
}