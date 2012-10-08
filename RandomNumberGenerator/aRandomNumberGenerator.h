#include <iostream>
#include <string>
#include<time.h>

using namespace std;

class aRandomNumberGenerator {

	public:
		//Constructor - seeding random number generator and setting low and high

		aRandomNumberGenerator(int l, int h){
			setLow(l);
			setHigh(h);
			srand(time(NULL));
		//	cout << time(NULL);
		}
		//the function set Highest instantiated number
		void setHigh(int h) {
			high = h;
		}
		void setLow(int l){
			low = l;
		}
		//the function generate random number b/w 1 to 9
		int generate(){

			int mod = (high - low) +1;
			int num = (rand() % mod);

			return num + 1;
		}
		 
	private:
		int low;
		int high;
};


class Tracker {

	public:
		//Using this constructor, initializing count array
		Tracker() {
			for (int i = 0; i <= 8; i++) {
				count[i] = 0;
			}
		}
		// the function counts repeated random number
		void trackInt(int n) {
			count[n - 1]++;
		};	
		// the function returns the number of time the random number has generated
		int getCount(int n) {
			return count[n-1];
		}
		// the function print out histogram along with number of time random number generated.
		void printHistogram(){
			cout <<"Number\t"<< "Appears\t\t" << "Histogram\n"<<endl;
			for(int i=1; i<=9; i++){
				cout << i <<":\t"<< getCount(i)<< "/100 \t";
				for(int j=1; j<=(getCount(i)/100); j++){
					cout <<"X";
				}
				cout << endl;
			}
		}
	private:
		int count[8];
};
