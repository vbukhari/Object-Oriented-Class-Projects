class Histogram {

	public:
		//Using this constructor, initializing count array
		Histogram();
		// the function counts repeated random number
		void trackInt(int n) ;;	
		// the function returns the number of time the random number has generated
		int getCount(int n) ;
		// the function print out histogram along with number of time random number generated.
		void printHistogram();
	private:
		int count[9];
};