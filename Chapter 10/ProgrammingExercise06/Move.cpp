#include <iostream>
#include "Move.h"

using namespace std;

Move::Move(double a, double b)
{
	reset(a, b);
}

void Move::showmove() const
{
	cout << "(" << x << ", " << y << ")" << endl;
}

Move Move::add(const Move& m) const
{
	return Move(m.x + x, m.y + y);
}

void Move::reset(double a, double b)
{
	x = a;
	y = b;
}
