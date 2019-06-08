#include "BadDude.h"
#include <iostream>

using std::cout;
using std::endl;


void BadDude::Show() const
{
	Person::Show();
	cout << "'s show method" << endl;

	cout << "Gunslinger: ";
	Gunslinger::Show();
	cout << endl;

	cout << "PokerPlayer: ";
	PokerPlayer::Show();
	cout << endl;
}
