#include "Skill.h"
#include <string>
#include <iostream>

using namespace std;

Skill::Skill()
{
}

Skill::Skill(string name)
{
	_name = name;
}


Skill::~Skill()
{
}

string Skill::GetSkill()
{	
	return _name;
}
