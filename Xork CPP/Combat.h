#ifndef Combat_h
#define Combat_h

#include <iostream>

#include "Character.h"
#include "Monster.h"
#include "Semaphore.h"

class Combat{
	public:	
		Semaphore semBlock;
		Semaphore semHigh;
		Semaphore semLow;

		Monster& M;
		
		Combat(Monster& newM);
		
		void combatChoice(Character& C);
		
		void combat1(Character& C);
	};
#endif

