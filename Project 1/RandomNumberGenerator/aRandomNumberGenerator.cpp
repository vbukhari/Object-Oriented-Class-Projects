/*
Authors: Vasim Bukhari & Luqmaan Dawoodjee
Project: aRandomNumber generator 
*/


#include <iostream>
#include <string>
#include "aRandomNumberGenerator.h"

using namespace std;

int main() {

	Tracker t;
	aRandomNumberGenerator r(1,5);

	for (int i = 0; i < 9000; i++) {	
		int randomNumber = r.generate();
		t.trackInt(randomNumber);
	}
	cout << endl;
	t.printHistogram(5,9);

	return 0;
}
	// constructor: sets the low, high and seeds rand
	aRandomNumberGenerator::aRandomNumberGenerator(int l, int h){
		setRange(l, h);
		// seed rand with the current timestamp
		srand((unsigned int)time(NULL));
	}
	int aRandomNumberGenerator::getHight(){
		return this->high;
	}
	void aRandomNumberGenerator::setHigh(int h) {
		high = h;
	}
	void aRandomNumberGenerator::setLow(int l){
		low = l;
	}
	void aRandomNumberGenerator::setRange(int l, int h) {
		setLow(l);
		setHigh(h);
	}
	// generate random numbers between low and high
	int aRandomNumberGenerator::generate(){
		//int mod = (high - low) +1;
		int num;
		num = (rand() % high)+1;
		if(num<low){
			num+=low;
		}
		return num;
	}


		//Using this constructor, initializing count array
	Tracker::Tracker() {
		for (int i = 0; i <= 8; i++) {
			count[i] = 0;
		}
	}
	
	// the function counts repeated random number
	void Tracker::trackInt(int n) {
		count[n - 1]++;
	}
	// the function returns the number of time the random number has generated
	int Tracker::getCount(int n) {
		return count[n-1];
	}
	// the function print out histogram along with number of time random number generated.
	void Tracker::printHistogram(int low, int high){
		cout <<"Number\t"<< "Appears\t\t" << "Histogram\n"<<endl;
		int i;
		for(i=low; i <=high; i++){
			cout << i <<":\t"<< getCount(i)<< "\t\t";
			for(int j=1; j<=(getCount(i)/100); j++){
				cout <<"X";
			}
			cout << endl;
		}
	}
