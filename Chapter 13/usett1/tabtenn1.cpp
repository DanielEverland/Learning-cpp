// tabtenn1.cpp -- simple base-class methods
#include <iostream>
#include "tabtenn1.h"

<<<<<<< HEAD
TableTennisPlayer::TableTennisPlayer(const string& fn, const string& ln, bool ht)
	: firstname(fn), lastname(ln), hasTable(ht) { }

void TableTennisPlayer::Name() const
{
	std::cout << lastname << ", " << firstname;
=======
TableTennisPlayer::TableTennisPlayer (const string& fn, const string& ln, bool ht) : firstName(fn), lastName(ln), hasTable(ht) { }

void TableTennisPlayer::Name() const
{
	std::cout << lastName << ", " << firstName;
>>>>>>> 5599dbc88f13aeffdd01a67eb4c291b16f6f7415
}

// RatedPlayer methods
RatedPlayer::RatedPlayer(unsigned int r, const string& fn, const string& ln, bool ht) : TableTennisPlayer(fn, ln, ht)
{
	rating = r;
}

<<<<<<< HEAD
RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer& tp)
	: TableTennisPlayer(tp), rating(r)
=======
RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer& tp) : TableTennisPlayer(tp), rating(r)
>>>>>>> 5599dbc88f13aeffdd01a67eb4c291b16f6f7415
{
}