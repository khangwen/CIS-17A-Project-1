#pragma once
#include <string>
#include "Skill.h"
#include "Stats.h"

class Class
{
private:
	std::string _name;
	Stats _stats;
	Skill _skill[10];
public:
	Class();
	Class(std::string name, Stats stats);
	~Class();

	std::string GetClassInfo();
	bool addSkill(Skill newSkill, int skillNum);
};

