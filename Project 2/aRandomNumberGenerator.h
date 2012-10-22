class aRandomNumberGenerator {

	public:
		// constructor: sets the low, high and seeds rand
		aRandomNumberGenerator(int l, int h);
		void setHigh(int h) ;
		void setLow(int l);
		void setRange(int l, int h) ;
		int generate();
		 
	private:
		int low;
		int high;
};