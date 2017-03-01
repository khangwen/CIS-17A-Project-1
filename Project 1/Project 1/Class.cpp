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
