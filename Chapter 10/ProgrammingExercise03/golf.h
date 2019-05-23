#pragma once
class golf
{
public:
	golf(const char* name, int hc);
	golf();

	void show() const;

private:
	static const int Len = 40;
	char fullname[Len];
	int handicap;
};

