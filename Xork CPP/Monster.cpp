#include "Monster.h"
#include <stdlib.h>

void Monster::attack(Character& target, bool low, bool high){
	int randc = rand() % 100 + 1;
	if(15 >= randc){		//critical hit %15 chance does 25 damage
		target.health-=25;
		cout << "The " << name << " attacks " << target.name << " doing 25 critical damage!" << endl;
		
	}else{		//critical hit %15 chance does 25 damage
		if(randc >= 90){		//10% chance of swiping low
			if(low == false){
				target.health-=damage;
				cout << "The " << name << " attacks low and catches " << target.name;
				cout << " after a sweep attack doing " << damage << " damage!" << endl;
			}
			if(low == true){
				cout << "The " << name << " attacks low but misses " << target.name << "!" << endl;
			}
		}else if(randc >= 80){		//10% chance of attacking high
			if(high == false){
				target.health-=damage;
				cout << "The " << name << " jumps up and attacks " << target.name;
				cout << " after a high attack doing " << damage << " damage!" << endl;
			}
			if(high == true){
				cout << "The " << name << " jumps up and attacks " << target.name << " and misses!" << endl;
			}
		}else{
			target.health-=damage;
			cout << "The " << name << " attacks " << target.name << " doing " << damage << " damage!" << endl;
		}
	}
	if (target.health <= 100/3)		//if health is 1/3 of original health
		cout << target.name << ", you're almost defeated!" << endl;
		cout << name << "'s health: " << health << "\n" << endl;
}

void Monster::blocked(Character& target){
	cout << "The " << name << " attacks " << target.name << " but fails, doing no damage!" << endl;
	cout << name << "'s health: " << health << "\n" << endl;
}

//monster constructor
Monster::Monster(string newname, int newHealth, int newDamage, int newCrit){
	name=newname;
	health=newHealth;
	damage=newDamage;
	crit=newCrit;
}	

