#pragma once
#include <string>
#include "Stats.h"
#include "Class.h"
#include "Skill.h"

//add class and skill
class Character
{
private:
	std::string _name;
	int _money;
	Stats _stats; 
	Class _class;
public:
	Character(std::string name, int money, Stats stats, Class dClass);
	~Character();

	std::string GetCharInfo();
};

