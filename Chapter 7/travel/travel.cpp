// travel.cpp -- using structures with functions

#include <iostream>

struct travel_times
{
	int hours;
	int mins;
};

const int Mins_per_hr = 60;

travel_times sum(travel_times t1, travel_times t2);
void show_time(travel_times t);

int main()
{
	using namespace std;

	travel_times day1 = { 5, 45 };	// 5 hrs, 45 min
	travel_times day2 = { 4, 55 };	// 4 hrs, 55 min

	travel_times trip = sum(day1, day2);
	cout << "Two-day total: ";
	show_time(trip);

	travel_times day3 = { 4, 32 };
	cout << "Three-day total: ";
	show_time(sum(trip, day3));
}

travel_times sum(travel_times t1, travel_times t2)
{
	travel_times total;

	total.mins = (t1.mins + t2.mins) % Mins_per_hr;
	total.hours = t1.hours + t2.hours + (t1.mins + t2.mins) / Mins_per_hr;

	return total;
}

void show_time(travel_times t)
{
	using namespace std;

	cout << t.hours << " hours, "
		 << t.mins << " minutes\n";
}