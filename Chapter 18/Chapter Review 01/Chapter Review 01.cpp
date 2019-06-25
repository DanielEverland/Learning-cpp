#include <iostream>
#include <vector>

class Z200
{
private:
	int j;
	char ch;
	double z;

public:
	Z200(int jv, char chv, double zv) : j(jv), ch(chv), z(zv) { }
};

double x = { 8.8 };
std::string s {"What a bracing effect!"};
int k {99};
Z200 zip = { 200, 'Z', 0.675 };

std::vector<int> ai = { 3, 9, 4, 7, 1 };