#include <iostream>
#include <cstring>
#include "dma.h"

lacksDMA::lacksDMA(const char* c, const char* l, int r) : baseDMA(l, r)
{
	strcpy(color, c);
}
lacksDMA::lacksDMA(const char* c, const baseDMA& rs) : baseDMA(rs)
{
	strcpy(color, c);
}

void lacksDMA::View() const
{
	using namespace std;

	baseDMA::View();

	cout << "Color: " << color << endl;
}