#pragma once

#ifndef TABTENN0
#include <string>

using std::string;

class TableTennisPlayer
{
public:
	TableTennisPlayer(const string& fn = "none", const string& ln = "none", bool ht = false);
	void Name() const;
	bool HasTable() const { return hasTable; }
	void ResetTable(bool v) { hasTable = v; }

private:
	string firstname;
	string lastname;
	bool hasTable;
};

#endif // !TABTENN0
