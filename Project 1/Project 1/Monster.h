#pragma once
#include <string>
#include "Skill.h"

class Monster
{
private:
	std::string _name;
	Skill _skill[10];
public:
	Monster(std::string name);
	~Monster();
};

