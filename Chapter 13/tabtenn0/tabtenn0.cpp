// tabtenn0.cpp -- simple base-class methods
#include <iostream>
#include "tabtenn0.h"

TableTennisPlayer::TableTennisPlayer(const string& fn, const string& ln, bool ht) : firstName(fn), lastName(ln), hasTable(ht) { }

void TableTennisPlayer::Name() const
{
	std::cout << lastName << ", " << firstName;
}