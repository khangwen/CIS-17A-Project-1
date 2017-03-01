#include <iostream>
#include "Stats.h"
#include <string>

using namespace std;

Stats::Stats()
{
	_intl = 0;
	_str = 0;
	_dex = 0;
	_hp = 0;
	_mp = 0;
}

Stats::Stats(int intl, int str, int dex, int hp, int mp)
{
	_intl = intl;
	_str = str;
	_dex = dex;
	_hp = hp;
	_mp = mp;
}

Stats::~Stats()
{
}

string Stats::GetStats()
{
	string info = "\n";
	info += "Hit Points: " + to_string(_hp) + "\n";
	info += "Mana Points: " + to_string(_mp) + "\n";
	info += "Intelligence: " + to_string(_intl) + "\n";
	info += "Strength: " + to_string(_str) + "\n";
	info += "Dexterity: " + to_string(_dex) + "\n";

	return info;
}
