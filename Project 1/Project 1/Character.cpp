#include "Character.h"
#include <iostream>
#include <string>

using namespace std; 

Character::Character(string name, int money, Stats stats, Class dClass)
{
	_name = name;
	_money = money;
	_stats = stats;
	_class = dClass;
}

Character::~Character()
{
}

string Character::GetCharInfo()
{
	
	string info = "\n----------------------------------------------------\n";
	info += "CHARACTER INFO\n\n";
	info += "Name: " + _name + "\n";
	info += "Money: " + to_string(_money) + "\n";
	info += _stats.GetStats();
	info += _class.GetClassInfo();
	info += "----------------------------------------------------\n";

	return info;
}
