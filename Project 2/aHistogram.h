#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class aHistogram {

public:
	aHistogram();
	~aHistogram();

	void setRange(int low , int high);
	void update(int n);
	void clear();
	void printHistogram();

private:
	// stores the count of the numbers between range low and high
	vector<int> count;
	// stores value of low, so the true value of a number at position 0 is actually 0 + offset (aka low)
	int offset;
	string getXes (int times);
	int getDivisor();
	int gcd(int x, int y);
	int vectorGCD(vector <int>);
};