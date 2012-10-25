#include <iostream>
#include <string>
#include <time.h>
#include "aHistogram.h"
#include "aRandomNumberGenerator.h"

using namespace std;

//Using this constructor, initializing count array
aHistogram::aHistogram(void)
{
}

aHistogram::~aHistogram(void)
{
}
aHistogram::aHistogram() {
	for (int i = 0; i <= 8; i++) {
		count[i] = 0;
	}
}

void aHistogram::setRange(int lw, int hg){
	aRandomNumberGenerator::aRandomNumberGenerator(lw, hg);
}
void aHistogram::update(int number){
	count[number - 1]++;
}
void aHistogram::clear(){

}
/* the function counts repeated random number
void aHistogram::trackInt(int n) {
	count[n - 1]++;
};*/
// the function returns the number of time the random number has generated
int aHistogram::getCount(int rnum) {
	return count[rnum-1];
}
// the function print out histogram along with number of time random number generated.
void aHistogram::printHistogram(){
	cout <<"Number\t"<< "Appears\t\t" << "Histogram\n"<<endl;
	for(int i=1; i < 9; i++){
		cout << i <<":\t"<< getCount(i)<< "\t\t";
		for(int j=1; j<=(getCount(i)/100); j++){
			cout <<"X";
		}
		cout << endl;
	}
}