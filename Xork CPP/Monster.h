#ifndef Monster_h
#define Monster_h

#include <iostream>
using namespace std;

#include "Character.h"
#include "main.h"
class Monster{
	public:
		string name;
		short health;
		short damage;
		short crit;

		Monster(string newName, int newHealth, int newDamage, int newCrit);
	
		void attack(Character&, bool, bool);
		void blocked(Character&);
	};
#endif

