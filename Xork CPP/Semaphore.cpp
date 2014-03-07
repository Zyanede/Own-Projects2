#include <pthread.h>
#include "Semaphore.h"

Semaphore::Semaphore(){
	signaled = true;
	count = 0;
}

//sem count
int Semaphore::Count(){
	return count;
}

//sem status
bool Semaphore::SemStat(){
	return signaled;
}

//claim
void Semaphore::P(){
	while(!signaled){
	}
	signaled = false;
	count++;
}

//release
void Semaphore::V(){
	signaled = true;
}
