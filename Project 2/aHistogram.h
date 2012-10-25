class aHistogram {

	public:
		//Using this constructor, initializing count array
		aHistogram(void);
		~aHistogram(void);

		void aHistogram::setRange(int, int);
		void aHistogram::update(int);
		void aHistogram::clear();
		// the function counts repeated random number
		//void trackInt(int ) ;
		// the function returns the number of time the random number has generated
		int getCount(int ) ;
		// the function print out histogram along with number of time random number generated.
		void printHistogram();
	private:
		int count[9];

};