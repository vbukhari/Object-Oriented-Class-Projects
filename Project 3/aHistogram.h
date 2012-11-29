#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class aHistogram {

public:
	aHistogram();
	~aHistogram();
	/* prepares the "bins" for each number in range */
	void setRange(int low , int high);
	/* iterates bin n */
	void update(int n);
	/* empties the "bins" */
	void clear();
	void printHistogram() const;

private:
	// stores the occurrences of the numbers between range low and high
	vector<int> occurrences;
	/* stores value of low, the value of number at index 0 is 0 + offset */
	int offset;
	/* returns a string with times number of "X"es */
	string getXes (int times) const;
	/* used to divide the number of occurences into a gui friendly number */
	int getDivisor() const;
	/* the gcd, i like it better than just using a random number like 50 */
	int gcd(int x, int y) const;
	/* returns the gcd of an entire vector */ 
	int vectorGCD(vector <int>) const;
	/* returns the gui friendly number of occurences at index n */
	int count(int n);
};