#include <iostream> 
using namespace std;

#include "Monster.h"
#include "Character.h"
#include "Combat.h"
#include <string>
#include <stack>
#include <unistd.h>

Monster goblin("Goblin",125,5,25);
Monster troll("Troll",125,5,25);
Monster ghoul("Ghoul",125,5,25);
Monster orc("Orc",125,5,25);

int main (int argc, char * const argv[]){
	//introduction and name choice
	string name;
	cout << "What is your name? ";
	cin >> name;
	cout << "Oh, " << name << ", the name etched into stone for ages! You have finally come! Good luck on this eve of battle, you'll need it." << endl;
	
	//create character
	Character C(name);
	
	//direction choice
	cout << "Time to go! Which direction will you take?\nN: North\nS: South\nE: East\nW: West" << endl;
	char choice;
	cin >> choice;
	switch (choice){
		case 'N':{
			cout << "You've found yourself among the ruins of an old castle's gate. There's a groaning"; 
			cout << " from behind a bush when suddenly a goblin jumps toward you!" << endl;
			cout << "\nPREPARE TO FIGHT!" << endl;
			sleep (1);
			cout << "3" << endl;
			sleep (1);
			cout << "2" << endl;
			sleep (1);
			cout << "1" << endl;
			sleep (1);
			cout << "FIGHT!\n" << endl;
			Combat combat(goblin);		//creates combat with monster
			combat.combat1(C);		//intializes combat using new character
			break;
			}
		case 'n':{
			cout << "You've found yourself among the ruins of an old castle's gate. There's a groaning"; 
			cout << " from behind a bush when suddenly a goblin jumps toward you!" << endl;
			cout << "\nPREPARE TO FIGHT!" << endl;
			sleep (1);
			cout << "3" << endl;
			sleep (1);
			cout << "2" << endl;
			sleep (1);
			cout << "1" << endl;
			sleep (1);
			cout << "FIGHT!\n" << endl;
			Combat combat(goblin);		//creates combat with monster
			combat.combat1(C);		//intializes combat using new character
			break;
			}
		case 'S':{
			cout << "There is a river roaring in front of you and the only way to cross is on a nearly broken bridge. There's a groaning"; 
			cout << " from below the bridge when suddenly a troll jumps toward you!" << endl;
			cout << "\nPREPARE TO FIGHT!" << endl;
			sleep (1);
			cout << "3" << endl;
			sleep (1);
			cout << "2" << endl;
			sleep (1);
			cout << "1" << endl;
			sleep (1);
			cout << "FIGHT!\n" << endl;
			Combat combat(troll);		//creates combat with monster
			combat.combat1(C);		//intializes combat using new character
			break;
			}
		case 's':{
			cout << "There is a river roaring in front of you and the only way to cross is on a nearly broken bridge. There's a groaning"; 
			cout << " from below the bridge when suddenly a troll jumps toward you!" << endl;
			cout << "\nPREPARE TO FIGHT!" << endl;
			sleep (1);
			cout << "3" << endl;
			sleep (1);
			cout << "2" << endl;
			sleep (1);
			cout << "1" << endl;
			sleep (1);
			cout << "FIGHT!\n" << endl;
			Combat combat(troll);		//creates combat with monster
			combat.combat1(C);		//intializes combat using new character
			break;
			}
		case 'E':{
			cout << "A haunted home is looming over the hill. As you approach to investigate "; 
			cout << " a ghoul comes screaming towards you!" << endl;
			cout << "\nPREPARE TO FIGHT!" << endl;
			sleep (1);
			cout << "3" << endl;
			sleep (1);
			cout << "2" << endl;
			sleep (1);
			cout << "1" << endl;
			sleep (1);
			cout << "FIGHT!\n" << endl;
			Combat combat(ghoul);		//creates combat with monster
			combat.combat1(C);		//intializes combat using new character
			break;
			}
		case 'e':{
			cout << "A haunted home is looming over the hill. As you approach to investigate "; 
			cout << " a ghoul comes screaming towards you!" << endl;
			cout << "\nPREPARE TO FIGHT!" << endl;
			sleep (1);
			cout << "3" << endl;
			sleep (1);
			cout << "2" << endl;
			sleep (1);
			cout << "1" << endl;
			sleep (1);
			cout << "FIGHT!\n" << endl;
			Combat combat(ghoul);		//creates combat with monster
			combat.combat1(C);		//intializes combat using new character
			break;
			}
		case 'W':{
			cout << "This land seems to be an elder battle ground. From over the hill"; 
			cout << " comes a stomping orc angrily toward you!" << endl;
			cout << "\nPREPARE TO FIGHT!" << endl;
			sleep (1);
			cout << "3" << endl;
			sleep (1);
			cout << "2" << endl;
			sleep (1);
			cout << "1" << endl;
			sleep (1);
			cout << "FIGHT!\n" << endl;
			Combat combat(orc);		//creates combat with monster
			combat.combat1(C);		//intializes combat using new character
			break;
			}	
		case 'w':{
			cout << "This land seems to be an elder battle ground. From over the hill"; 
			cout << " comes a stomping orc angrily toward you!" << endl;
			cout << "\nPREPARE TO FIGHT!" << endl;
			sleep (1);
			cout << "3" << endl;
			sleep (1);
			cout << "2" << endl;
			sleep (1);
			cout << "1" << endl;
			sleep (1);
			cout << "FIGHT!\n" << endl;
			Combat combat(orc);		//creates combat with monster
			combat.combat1(C);		//intializes combat using new character
			break;
			}
	}
	cout << "Thanks for playing!" << endl;
	return 0;
}

