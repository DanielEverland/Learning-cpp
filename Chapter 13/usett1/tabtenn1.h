<<<<<<< HEAD
#pragma once

#ifndef TABTENN1_H_
#define TABTENN1_H_

#include <iostream>

=======
// tabtenn1.h -- a table-tennis base class
#ifndef TABTENN1_H_
#define TABTENN1_H_

#include <string>
>>>>>>> 5599dbc88f13aeffdd01a67eb4c291b16f6f7415
using std::string;

// simple base class
class TableTennisPlayer
{
public:
	TableTennisPlayer(const string& fn = "none", const string& ln = "none", bool ht = false);
	void Name() const;
	bool HasTable() const { return hasTable; }
	void ResetTable(bool v) { hasTable = v; }

private:
<<<<<<< HEAD
	string firstname;
	string lastname;
=======
	string firstName;
	string lastName;
>>>>>>> 5599dbc88f13aeffdd01a67eb4c291b16f6f7415
	bool hasTable;
};

// simple derived class
class RatedPlayer : public TableTennisPlayer
{
public:
	RatedPlayer(unsigned int r = 0, const string & fn = "none", const string & ln = "none", bool ht = false);
	RatedPlayer(unsigned int r, const TableTennisPlayer& tp);
<<<<<<< HEAD
=======

>>>>>>> 5599dbc88f13aeffdd01a67eb4c291b16f6f7415
	unsigned int Rating() const { return rating; }
	void ResetRating(unsigned int r) { rating = r; }

private:
	unsigned int rating;
};

<<<<<<< HEAD
#endif
=======
#endif // !TABTENN1_H_
>>>>>>> 5599dbc88f13aeffdd01a67eb4c291b16f6f7415
