#include <iostream>
#include <cstring>
#include "dma.h"

hasDMA::hasDMA(const char* s, const char* l, int r) : baseDMA(l, r)
{
	style = new char[strlen(s) + 1];
	strcpy(style, s);
}
hasDMA::hasDMA(const char* s, const baseDMA& rs) : baseDMA(rs)
{
	style = new char[strlen(s) + 1];
	strcpy(style, s);
}
hasDMA::hasDMA(const hasDMA& hs) : baseDMA(hs)
{
	style = new char[strlen(hs.style) + 1];
	strcpy(style, hs.style);
}
hasDMA::~hasDMA()
{
	delete[] style;
}

hasDMA& hasDMA::operator=(const hasDMA& rs)
{
	delete[] style;

	baseDMA::operator=(rs);
	
	style = new char[strlen(rs.style) + 1];
	strcpy(style, rs.style);

	return *this;
}
void hasDMA::View() const
{
	using namespace std;

	baseDMA::View();

	cout << "Style: " << style << endl;
}