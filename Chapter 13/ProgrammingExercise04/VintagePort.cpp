#include <iostream>
#include <cstring>
#include "VintagePort.h"

VintagePort::VintagePort() : Port("none", "vintage")
{
	nickname = nullptr;
	year = 0;
}
VintagePort::VintagePort(const char* br, int b, const char* nn, int y) : Port(br, "vintage")
{
	nickname = new char[strlen(nn) + 1];
	strcpy(nickname, nn);

	year = y;
}
VintagePort::VintagePort(const VintagePort& vp) : Port(vp)
{
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy(nickname, vp.nickname);

	year = vp.year;
}

VintagePort& VintagePort::operator = (const VintagePort& vp)
{
	delete[] nickname;

	Port::operator=(vp);

	nickname = new char[strlen(vp.nickname) + 1];
	strcpy(nickname, vp.nickname);

	year = vp.year;

	return *this;
}

void VintagePort::Show() const
{
	Port::Show();

	cout << "Nickname: " << nickname << endl;
	cout << "Year: " << year << endl;
}

ostream& operator << (ostream& os, const VintagePort& vp)
{
	os << (const Port&)vp;
	os << ", " << vp.nickname << ", " << vp.year;

	return os;
}