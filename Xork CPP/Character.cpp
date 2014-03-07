#include "Character.h"
#include <stdlib.h>

void Character::attackMid(Monster& target){
	int randc = rand() % 100 + 1;
	if(15 >= randc){		//critical hit %15 chance does 25 damage
		target.health-=25;
		cout << "\n" << name << " attacks the " << target.name << " doing 25 critical damage!" << endl;
		if ((target.health <= 125/3) && (target.health > 0))		//if health is 1/3 of original health
			cout << "The " << target.name << " is almost defeated!" << endl;
		cout << name << "'s health: " << health << "\n" << endl;
	}else{
		target.health-=damage;
		cout << "\n" << name << " attacks the " << target.name << " doing " << damage << " damage!" << endl;
		if ((target.health <= 125/3) && (target.health > 0))		//if health is 1/3 of original health
			cout << "The " << target.name << " is almost defeated!" << endl;
		cout << name << "'s health: " << health << "\n" << endl;
	}
}

void Character::attackLow(Monster& target){
	int randc = rand() % 100 + 1;
	if(15 >= randc){		//critical hit %15 chance does 25 damage
		target.health-=25;
		cout << "\n" << name << " kneels and sweeps low at the " << target.name << " doing 25 critical damage!" << endl;
		if ((target.health <= 125/3) && (target.health > 0))		//if health is 1/3 of original health
			cout << "The " << target.name << " is almost defeated!" << endl;
		cout << name << "'s health: " << health << "\n" << endl;
	}else{
		target.health-=damage;
		cout << "\n" << name << " kneels and sweeps low at the " << target.name << " doing " << damage << " damage!" << endl;
		if ((target.health <= 125/3) && (target.health > 0))		//if health is 1/3 of original health
			cout << "The " << target.name << " is almost defeated!" << endl;
		cout << name << "'s health: " << health << "\n" << endl;
	}
}

void Character::attackHigh(Monster& target){
	int randc = rand() % 100 + 1;
	if(15 >= randc){		//critical hit %15 chance does 25 damage
		target.health-=25;
		cout << "\n" << name << " jumps into the air swiping down at the " << target.name << " doing 25 critical damage!" << endl;
		if ((target.health <= 125/3) && (target.health > 0))		//if health is 1/3 of original health
			cout << "The " << target.name << " is almost defeated!" << endl;
		cout << name << "'s health: " << health << "\n" << endl;
	}else{
		target.health-=damage;
		cout << "\n" << name << " jumps into the air swiping down at the " << target.name << " doing " << damage << " damage!" << endl;
		if ((target.health <= 125/3) && (target.health > 0))		//if health is 1/3 of original health
			cout << "The " << target.name << " is almost defeated!" << endl;
		cout << name << "'s health: " << health << "\n" << endl;
	}
}

void Character::rangedAttack(Monster& target){
	int randc = rand() % 100 + 1;
	if (arrows == 0 )		//if out of arrows, can't shoot
		cout << "\n" << name << ", you're out of arrows!" << "\n" << endl;
	else if(15 >= randc){		//critical hit %15 chance does 25 damage
		target.health-=25;
		cout << "\n" << name << " shoots the " << target.name << " doing 25 critical damage!" << endl;
		if ((target.health <= 125/3) && (target.health > 0))		//if health is 1/3 of original health
			cout << "The " << target.name << " is almost defeated!" << endl;
		cout << name << "'s health: " << health << "\n" << endl;
	}else{
		short rangedDamaged=damage*2;
		target.health-=rangedDamaged;
		arrows--;
		cout << "\n" << name << " shoots the " << target.name << " doing " << rangedDamaged << " damage!" << endl;
		if ((target.health <= 125/3) && (target.health > 0))		//if health is 1/3 of original health
			cout << "The " << target.name << " is almost defeated!" << endl;
		cout << name << "'s health: " << health << "\n" << endl;
	}
}

void Character::block(Monster& target){
	cout << "\n" << name << " holds up shield and prepares for the " << target.name << " attack!\n" << endl;
}

//character constructor
Character::Character(string newname){
	name=newname;
	health=100;
	damage=7;
	arrows=5;
}

void Character::display(){
	cout << name << "  health: " << health << "  arrows: " << arrows << endl;
}

