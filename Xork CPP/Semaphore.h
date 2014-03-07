#include <pthread.h>

class Semaphore{
	private:
		bool signaled;
		short count;
	public:
		//constructor/destructor
		Semaphore();
		//semaphore operators
		int Count();
		bool SemStat();
		void P();
		void V();
};
