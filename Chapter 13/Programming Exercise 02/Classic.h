#pragma once

#include "Cd.h"

class Classic : public Cd
{
public:
	Classic(const char* primaryWork, const char* s1, const char* s2, int n, double x);
	Classic(const Classic& c);
	Classic();
	~Classic();

	virtual void Report() const;
	Classic& operator = (const Classic& c);

private:
	char* primaryWork;
};