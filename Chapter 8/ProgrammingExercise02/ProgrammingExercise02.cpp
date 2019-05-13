// ProgrammingExercise02.cpp

#include <iostream>

using namespace std;

struct CandyBar
{
	const char* name;
	double weight;
	int calories;
};

void fill(CandyBar& bar, const char* str = "Millennium Munch", double wt = 2.85, int cal = 350);
void show(const CandyBar& bar);

int main()
{
	CandyBar first{ "I'm the first!", 10, 2000 };
	CandyBar second{ "I'm the second!" };

	cout << "First is" << endl;
	show(first);

	fill(first, "Absolute Shit", 50, 100);
	cout << "Now first is" << endl;
	show(first);

	cout << "Uninitialized second is" << endl;
	show(second);
	fill(second);
	cout << "Initialized with default values" << endl;
	show(second);
}

void fill(CandyBar& bar, const char* str, double wt, int cal)
{
	bar.name = str;
	bar.weight = wt;
	bar.calories = cal;
}

void show(const CandyBar& bar)
{
	cout << "----" << bar.name << "----" << endl;
	cout << "weighs " << bar.weight << endl;
	cout << "with " << bar.calories << " calories" << endl << endl;
}