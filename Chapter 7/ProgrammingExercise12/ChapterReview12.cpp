/* ChapterReview12.cpp 
Suppose we have the following structure declaration:

struct applicant
{
	char name[30];
	int credit_rating[3];
};

	a.	Write a function that takes an applicant structure as an argument and dis-
		plays its contents.
	b.	Write a function that takes the address of an applicant structure as an argu-
		ment and displays the contents of the pointed-to structure.*/

#include <iostream>

struct applicant
{
	char name[30];
	int credit_rating[3];
};

using namespace std;

void funcA(applicant app)
{
	cout << "Name: " << app.name << endl;

	for (int i = 0; i < 3; i++)
		cout << "\tRating #" << i + 1 << ": " << app.credit_rating[i] << endl;

}
void funcB(applicant* app)
{
	cout << "Name: " << app->name << endl;

	for (int i = 0; i < 3; i++)
		cout << "\tRating #" << i + 1 << ": " << app->credit_rating[i] << endl;
}