#include "aHistogram.h"

aHistogram::aHistogram() {};
/* the vectors do not need to be destructed, see http://stackoverflow.com/questions/1591018/stdvectorclear-in-constructor-and-destructor */
aHistogram::~aHistogram() {};

void aHistogram::setRange(int low , int high) {

	offset = low;

	if (!count.empty())
		clear();

	// set the count for all the numbers to 0
	for (int i = low; i <= high; i++) {
		count.push_back(0);
	}

};

void aHistogram::update(int n) {
	count.at(n - offset) += 1;
};

void aHistogram::clear() {
	count.clear();
};

void aHistogram::printHistogram() {

	for (int i = 0; i < count.size() ; i++) {
		cout << count.at(i);
	}

};
