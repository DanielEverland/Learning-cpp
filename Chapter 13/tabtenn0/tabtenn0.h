// tabtenn0.h -- a table-tennis base class
#ifndef TABTENN0_H_
#define TABTENN0_H_

#include <string>
using std::string;

// a simple base class
class TableTennisPlayer
{
public:
	TableTennisPlayer(const string& fn = "none", const string& ln = "none", bool ht = false);
	void Name() const;
	bool HasTable() const { return hasTable; }
	void ResetTable(bool v) { hasTable = v; }

private:
	string firstName;
	string lastName;
	bool hasTable;
};

#endif // !TABTENN0_H_
