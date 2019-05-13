// twoswap.cpp -- specialization overrides a template

#include <iostream>
template <typename T>
void Swap(T& a, T& b);

struct job
{
	char name[40];
	double salery;
	int floor;
};

// explicit specialization
template<> void Swap<job>(job& j1, job& j2);

void Show(job& j);

int main()
{
	using namespace std;

	cout.precision(2);
	cout.setf(ios_base::fixed, ios_base::floatfield);

	int i = 10, j = 20;
	cout << "i, j = " << i << ", " << j << ".\n";
	cout << "Using compiler-generated int swapper:\n";
	Swap(i, j);		// generates void Swap(int&, int&)
	cout << "Now i, j = " << i << ", " << j << ".\n";

	job sue = { "Susan Yaffee", 73000.60, 7 };
	job sidney = { "Sidney Taffee", 78060.72, 9 };
	cout << "Before job swapping:\n";
	Show(sue);
	Show(sidney);
	Swap(sue, sidney);	// uses void Swap(job&, job&)

	cout << "After job swapping:\n";
	Show(sue);
	Show(sidney);
}

template <typename T>
void Swap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

// swaps just the salery and floor fields of a job structure

template <> void Swap<job>(job& j1, job& j2)	// specialization
{
	double t1;
	int t2;

	t1 = j1.salery;
	j1.salery = j2.salery;
	j2.salery = t1;

	t2 = j1.floor;
	j1.floor = j2.floor;
	j2.floor = t2;
}

void Show(job& j)
{
	using namespace std;

	cout << j.name << ": $" << j.salery
		 << " on floor " << j.floor << endl;
}