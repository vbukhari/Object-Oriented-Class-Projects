class aRandomNumberGenerator {

	public:
		// constructor: sets the low, high and seeds rand
		aRandomNumberGenerator(void);
		~aRandomNumberGenerator(void);

		aRandomNumberGenerator::aRandomNumberGenerator(int, int);

		void aRandomNumberGenerator::setHighNum(int);
		int aRandomNumberGenerator::getHighNum();
		void aRandomNumberGenerator::setLowNum(int);
		int aRandomNumberGenerator::getLowNum();


		int aRandomNumberGenerator::generate();
		 
	private:
		int low;
		int high;
};