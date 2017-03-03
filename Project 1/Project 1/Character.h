#pragma once
#include <string>
#include "Stats.h"
#include "Class.h"
#include "Skill.h"

class Character
{
private:
	std::string _name;
	int _money;
	Stats _stats; 
	Class _class;
	Skill _skill[10];
public:
	Character(); 
	~Character();

	std::string GetCharInfo();
	void setCharInfo(std::string name, int money, Stats stats, Class dClass);
	bool addSkill(Skill newSkill, int skillNum);
};

