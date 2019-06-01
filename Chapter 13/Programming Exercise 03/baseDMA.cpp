#include <cstring>
#include "dma.h"

baseDMA::baseDMA(const char* l, int r)
{
	label = new char[strlen(l) + 1];
	strcpy(label, l);

	rating = r;
}

baseDMA::baseDMA(const baseDMA& rs)
{
	label = new char[strlen(rs.label) + 1];
	strcpy(label, rs.label);

	rating = rs.rating;
}

baseDMA::~baseDMA()
{
	delete[] label;
}

baseDMA& baseDMA::operator=(const baseDMA& rs)
{
	delete[] label;

	label = new char[strlen(rs.label) + 1];
	strcpy(label, rs.label);

	rating = rs.rating;

	return *this;
}

void baseDMA::View() const
{
	using namespace std;

	cout << "Label: " << label << ", rating: " << rating << endl;
}