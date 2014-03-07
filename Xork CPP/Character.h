#ifndef Character_h
#define Character_h

#include "Monster.h"
#include "main.h"

#include <stack>
#include <iostream>
using namespace std;

class Character{
	public:
		string name;
		short health;
		short damage;
		short arrows;

		Character(string newName);

		void attackMid(Monster& target);
		void attackLow(Monster& target);
		void attackHigh(Monster& target);
		
		void rangedAttack(Monster& target);
	
		void block(Monster& target);
		
		void display();
	};
#endif

