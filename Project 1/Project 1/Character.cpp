#include "Character.h"
#include <iostream>
#include <string>

using namespace std; 

Character::Character()
{
}

Character::~Character()
{
	cout << "test \n";
}

string Character::GetCharInfo()
{
	
	string info = "\n----------------------------------------------------\n";
	info += "CHARACTER INFO\n\n";
	info += "Name: " + _name + "\n";
	info += "Money: " + to_string(_money) + "\n";
	info += _stats.GetStats() + "\n";
	info += _class.GetClassInfo();
	for (int i = 0; i < 10; i++) {
		info += "Skill " + to_string(i + 1) + ": " + _skill[i].GetSkill() + "\n";
	}
	info += "----------------------------------------------------\n";

	return info;
}

void Character::setCharInfo(string name, int money, Stats stats, Class dClass)
{
	_name = name;
	_money = money;
	_stats = stats;
	_class = dClass;
}

bool Character::addSkill(Skill newSkill, int skillNum)
{
	if (skillNum <= 9) {
		_skill[skillNum] = newSkill;
		return true;
	}

	return false;
}
