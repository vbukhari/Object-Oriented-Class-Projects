#include "aHistogram.h"

aHistogram::aHistogram() {};
/* the vectors do not need to be destructed, see http://stackoverflow.com/questions/1591018/stdvectorclear-in-constructor-and-destructor */
aHistogram::~aHistogram() {};

void aHistogram::setRange(int low , int high) {
	offset = low;
	if (!count.empty())
		clear();
	// set the count for all the numbers to 0
	for (int i = low; i <= high; i++)
		count.push_back(0);
};

void aHistogram::update(int n) {
	count.at(n - offset) += 1;
};

void aHistogram::clear() {
	count.clear();
};

void aHistogram::printHistogram() {

	int divisor = getDivisor();

	for (int i = 0; i < (int) count.size() ; i++) {
		cout << (i + offset) << ": " << getXes( count.at(i) / divisor )  << endl;
	}
};

/* returns a string with times number of "X"es */
string aHistogram::getXes(int times) {
	string out = "";
	for (int i = 0; i < times; i++)
		out += "X";
	return out;
}

/* returns an int that can be used to divide the number of occurences of each number into a nicer number of Xes */
int aHistogram::getDivisor() {
	return vectorGCD(count);
}

int aHistogram::vectorGCD(vector<int> numbers) {

	int g = gcd(numbers.at(0), numbers.at(1));

	if (numbers.size() > 1) {
		for (int i = 2; i < (int) (numbers.size() - 1); i++) {
			g = gcd(g, numbers.at(i + 1));
		}
	}

	return g;
}

int aHistogram::gcd(int x, int y) {

	if (x == 0)
		return y;
	else if (y == 0)
		return x;

	while ( true ) {
		x = x % y;
		if ( x == 0 )
			return y;
		y = y % x;
		if ( y == 0 )
			return x;
	}

	return 1;
}