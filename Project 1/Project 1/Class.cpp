#include "Class.h"
#include <string>

using namespace std;

Class::Class()
{
	_name = "Null";
	_stats = Stats();
}

Class::Class(string name, Stats stats)
{
	_name = name;
	_stats = stats;
}



Class::~Class()
{
}

string Class::GetClassInfo()
{
	string info = "";
	info += "Class: " + _name + "\n";

	return info;
}

bool Class::addSkill(Skill newSkill, int skillNum)
{
	if (skillNum <= 9) {
		_skill[skillNum] = newSkill;
		return true;
	}

	return false;
}