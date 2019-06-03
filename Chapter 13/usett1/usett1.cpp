// usett1.cpp -- using base class and derived class
#include <iostream>
#include "tabtenn1.h"

<<<<<<< HEAD
int main( void )
=======
int main(void)
>>>>>>> 5599dbc88f13aeffdd01a67eb4c291b16f6f7415
{
	using std::cout;
	using std::endl;

	TableTennisPlayer player1("Tara", "Boomdea", false);
	RatedPlayer rplayer1(1140, "Mallory", "Duck", true);

<<<<<<< HEAD
	rplayer1.Name();
	if (rplayer1.HasTable())
		cout << ": has a table\n";
	else
		cout << ": hasn't a table.\n";

	player1.Name();
	if (player1.HasTable())
		cout << ": has a table\n";
=======
	rplayer1.Name();		// derived object uses base method
	if (rplayer1.HasTable())
		cout << ": has a table.\n";
	else
		cout << ": hasn't a table.\n";

	player1.Name();		// base object uses base method
	if (player1.HasTable())
		cout << ": has a table.\n";
>>>>>>> 5599dbc88f13aeffdd01a67eb4c291b16f6f7415
	else
		cout << ": hasn't a table.\n";

	cout << "Name: ";
	rplayer1.Name();
<<<<<<< HEAD
	cout << "; Rating: " << rplayer1.Rating() << endl;

=======

	cout << "; Rating: " << rplayer1.Rating() << endl;

	// initialize RatedPlayer using TableTennisPlayer object
>>>>>>> 5599dbc88f13aeffdd01a67eb4c291b16f6f7415
	RatedPlayer rplayer2(1212, player1);
	cout << "Name: ";
	rplayer2.Name();
	cout << "; Rating: " << rplayer2.Rating() << endl;
}