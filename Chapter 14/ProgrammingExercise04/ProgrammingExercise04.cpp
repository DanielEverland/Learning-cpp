#include <string>
#include <iostream>
#include "BadDude.h";
#include "Gunslinger.h";
#include "Person.h";
#include "PokerPlayer.h";

int GetPersonCount();
Person** CreatePersonList(int personCount);
void ShowPersonList(Person** personList, int length);

BadDude* CreateBadDude();
Gunslinger* CreateGunslinger();
Person* CreatePerson();
PokerPlayer* CreatePokerPlayer();

using namespace std;

int main()
{
	int personCount = GetPersonCount();
	Person** personList = CreatePersonList(personCount);
	ShowPersonList(personList, personCount);

	cout << "Bye!" << endl;
}

int GetPersonCount()
{
	int personCount = 0;

	cout << "How many people do you want?" << endl;
	cin >> personCount;
	cout << endl;

	return personCount;
}

Person** CreatePersonList(int personCount)
{
	char selection = '\0';
	Person** personList = new Person*[personCount];
	for (int i = 0; i < personCount; i++)
	{
		cout << "What type of person should #" << i + 1 << " be?" << endl;
		cout << "a = BadDude	b = Gunslinger" << endl;
		cout << "c = Person	d = PokerPlayer" << endl;

		cin >> selection;

		switch (selection)
		{
		case 'a': case 'A':
			personList[i] = CreateBadDude();
			break;
		case 'b': case 'B':
			personList[i] = CreateGunslinger();
			break;
		case 'c': case 'C':
			personList[i] = CreatePerson();
			break;
		case 'd': case 'D':
			personList[i] = CreatePokerPlayer();
			break;

		default:
			cout << "UNKNOWN TYPE" << endl;
			break;
		}
	}

	return personList;
}

void ShowPersonList(Person** personList, int length)
{
	cout << "Here's your collection of meat bags" << endl;

	for (int i = 0; i < length; i++)
	{
		cout << endl;
		personList[i]->Show();
		cout << endl;
	}
}

BadDude* CreateBadDude()
{
	Gunslinger* gunslinger = CreateGunslinger();
	
	return new BadDude(gunslinger->GetFirstName(), gunslinger->GetLastName(), gunslinger->GetGunNotches());
}
Gunslinger* CreateGunslinger()
{
	Person* person = CreatePerson();

	int gunNotches = 0;
	cout << "Amount of gun notches: ";
	cin >> gunNotches;

	return new Gunslinger(*person, gunNotches);
}
Person* CreatePerson()
{
	string firstName, lastName;
	
	cout << "First Name: ";
	cin >> firstName;

	cout << "Last Name: ";
	cin >> lastName;

	return new Person(firstName, lastName);
}
PokerPlayer* CreatePokerPlayer()
{
	return new PokerPlayer(*CreatePerson());
}