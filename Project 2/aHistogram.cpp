#include "aHistogram.h"

aHistogram::aHistogram() {};
/* the vectors do not need to be destructed, see http://stackoverflow.com/questions/1591018/stdvectorclear-in-constructor-and-destructor */
aHistogram::~aHistogram() {};

void aHistogram::setRange(int low , int high) {

	offset = low;
	if (!occurrences.empty())
		clear();

	for (int i = low; i <= high; i++)
		occurrences.push_back(0);
};

void aHistogram::update(int n) {
	occurrences.at(n - offset) += 1;
};

void aHistogram::clear() {
	offset = 0;
	occurrences.clear();
};

void aHistogram::printHistogram() {

	int divisor = getDivisor();

	for (int i = 0; i < (int) occurrences.size() ; i++) {
		cout << (i + offset) << ": \t" <<  occurrences.at(i) << " " << count(i) << "\t" << getXes( occurrences.at(i) / divisor )  << endl;
	}

};

int aHistogram::count(int n) {
	return  occurrences.at(n) / getDivisor();
}

string aHistogram::getXes(int times) {
	string out = "";
	for (int i = 0; i < times; i++)
		out += "X";
	return out;
}

int aHistogram::getDivisor() {
	int divisor = vectorGCD(occurrences);

	while ( ( *min_element(occurrences.begin(),  occurrences.end()) / divisor ) > 10 ) {
		divisor *= 10;
	}

	return divisor;
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