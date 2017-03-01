#include <iostream>
#include <string>
#include "Class.h"
#include "Skill.h"
#include "Stats.h"
#include "Character.h"

using namespace std;

int main() {

	string username;
	string uClass;
	Stats charStat;
	Class charClass;

	Stats warStat = Stats(10, 30, 20, 200, 50);
	Class warClass = Class("Warrior", warStat);
	Stats magStat = Stats(40, 10, 10, 100, 200);
	Class magClass = Class("Magician", magStat);
	Stats arcStat = Stats(15, 20, 30, 150, 100);
	Class arcClass = Class("Archer", arcStat);
	Stats clerStat = Stats(30, 10, 10, 100, 150);
	Class clerClass = Class("Cleric", clerStat);

	cout << "Welcome to ICANTCOMEUPWITHANAME online!" << endl; //Add dif name later
	cout << "Enter a username: ";
	getline(cin, username);

	cout << "\nChoose a class. \n";
	cout << "----------------------------------------------------\n";
	cout << "Warrior\nMagician\nArcher\nCleric\n\n";
	getline(cin, uClass);

	for (int i = 0; i < uClass.size(); i++){
		uClass[i] = tolower(uClass[i]);
	}

	if (uClass == "warrior"){
		charStat = warStat;
		charClass = warClass;
	}
	if (uClass == "magician") {
		charStat = magStat;
		charClass = magClass;
	}
	if (uClass == "archer") {
		charStat = arcStat;
		charClass = arcClass;
	}
	if (uClass == "cleric") {
		charStat = clerStat;
		charClass = clerClass;
	}

	Character charInfo = Character(username, 250, charStat, charClass);
	cout << charInfo.GetCharInfo();
	cout << endl;

	return 0;
}