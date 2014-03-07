#include <pthread.h>

class Semaphore{
	private:
		bool signaled;
	public:
		//constructor/destructor
		Semaphore();
		//semaphore operators
		bool SemStat();
		void P();
		void V();
};
