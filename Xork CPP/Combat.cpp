#include "Combat.h"
#include "Monster.h"
#include "Character.h"
#include <stdlib.h>

Combat::Combat(Monster& newM) : M(newM){
}

void Combat::combatChoice(Character& C){
	
	C.display();		//display player stats
	cout << "Choose your next move:\n1: jump attack\n2: sweep attack\n3: brute mid attack\n4: fire arrow\n5: block\nQ: quit" << endl;
	char choice;
	cin >> choice;		//player choice switches to attack decision
	switch (choice){
		case '1':
			C.attackHigh(M);
			semHigh.P();
			break;
			
		case '2':
			C.attackLow(M);
			semLow.P();
			break;
		case '3':
			C.attackMid(M);
			break;
		case '4':
			C.rangedAttack(M);
			break;
		case '5':
			C.block(M);
			semBlock.P();
			break;
		case 'q':
			cout << "GAME OVER\n" << "Thanks for playing, " << C.name << "!" << endl;
			exit(1);
			break;
		case 'Q':
			cout << "GAME OVER\n" << "Thanks for playing, " << C.name << "!" << endl;
			exit(1);
			break;
	}
}


void Combat::combat1(Character& C){
	while  (M.health>0 && C.health>0 ){	//loop attacks till someone dies
		
		if(semBlock.SemStat() == false)
		M.blocked(C);			//monster is blocked if sem is locked

		if(semBlock.SemStat() == true)
		M.attack(C, semLow.SemStat(), semHigh.SemStat());	//monster attack if sem is unlocked
		
		semBlock.V();			//release sems after monster attack
		semLow.V();
		semHigh.V();

		combatChoice(C);		//player attacks
		
	}
	
	//state who dies then exit combat1
	if (M.health<0)
		cout << "The " << M.name << " was defeated!\nCONGRATULATIONS! You saved the day!" << endl;
	if (C.health<0)
		cout << "YOU HAVE PERISHED! GAME OVER" << endl;
	cout << "\nYour stats:" << "\nblocks: " << semBlock.Count() << "\nlow attacks: " << semLow.Count() << "\nhigh attacks: " << semHigh.Count() << endl;
	
}



