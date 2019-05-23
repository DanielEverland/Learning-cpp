#pragma once
class Plorg
{
public:
	Plorg(const char* name = "Plorga");

	void SetContentmentIndex(int n);
	void Show();

private:
	static const int NameLen = 20;

	char name[NameLen];
	int contentmentIndex = 50;
};

