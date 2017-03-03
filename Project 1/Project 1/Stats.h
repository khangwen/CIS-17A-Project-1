#pragma once

class Stats
{
private:
	int _intl;
	int _str;
	int _dex;
	int _hp;
	int _mp;
public:
	Stats();
	Stats(int intl, int str, int dex, int hp, int mp);
	~Stats();

	std::string GetStats();
};

