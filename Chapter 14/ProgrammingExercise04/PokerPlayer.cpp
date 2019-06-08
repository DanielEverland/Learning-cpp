#include <iostream>
#include <random>
#include "PokerPlayer.h"

using std::cout;
using std::endl;

int PokerPlayer::Draw() const
{
	return rand() % 51 + 1;
}
void PokerPlayer::Show() const
{
	Person::Show();
	cout << " drew: " << Draw();
}
