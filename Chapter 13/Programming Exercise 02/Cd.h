#pragma once

class Cd
{
public:
	Cd(const char* s1, const char* s2, int n, double x);
	Cd(const Cd& d);
	Cd();
	virtual ~Cd();

	virtual void Report() const;	// reports all CD data
	Cd& operator = (const Cd& d);

private:
	char* performers;
	char* label;
	int selections;			// number of selections
	double playtime;		// playing time in minutes
};