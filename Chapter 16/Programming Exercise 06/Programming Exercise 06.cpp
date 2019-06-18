// Programming Exercise 06.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <queue>

const int MIN_PER_HR = 60;

// This queue will contain Customer items
class Customer
{
public:
	Customer() { arrive = processtime = 0; }
	void set(long when);
	long when() const { return arrive; }
	int ptime() const { return processtime; }

private:
	long arrive;		// arrival time for customer
	int processtime;	// processing time for customer
};

bool newcustomer(double x);	// is there a new customer?

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::ios_base;
	using std::queue;

	std::srand(std::time(0));	// random initialization of rand()

	cout << "Case Study: Bank of Heather Automatic Teller\n";
	cout << "Enter maximum size of queue: ";

	int qs;
	cin >> qs;
	queue<Customer> line;			// line queue hold up to qs people

	cout << "Enter the number of simulation hours: ";
	int hours;					// hours of simulation
	cin >> hours;

	// simulation will run 1 cycle per minutes
	long cyclelimit = MIN_PER_HR * hours;	// # of cycles

	cout << "Enter the average number of customers per hour: ";
	double perhour;				// average # of arrival per hour
	cin >> perhour;
	double min_per_cust;		// average time between arrivals
	min_per_cust = MIN_PER_HR / perhour;

	Customer temp;			// new customer data
	long turnaway = 0;		// turned away by full queue
	long customers = 0;		// joined the queue
	long served = 0;		// served during the simulation
	long sum_line = 0;		// cumulative line length
	int wait_time = 0;		// time until autoteller is free
	long line_wait = 0;		// cumulative time in line

	// running the simulation
	for (int cycle = 0; cycle < cyclelimit; cycle++)
	{
		if (newcustomer(min_per_cust))	// have newcomer
		{
			if (line.size() >= qs)
				turnaway++;
			else
			{
				customers++;
				temp.set(cycle);	// cycle = time of arrival
				line.push(temp);	// add newcomer to line
			}
		}
		if (wait_time <= 0 && !line.empty())
		{
			temp = line.front();		// attend next customer
			line.pop();
			wait_time = temp.ptime();	// for wait_time minutes
			line_wait += cycle - temp.when();
			served++;
		}
		if (wait_time > 0)
			wait_time--;

		sum_line += line.size();
	}

	// reporting results
	if (customers > 0)
	{
		cout << "customers accepted: " << customers << endl;
		cout << "  customers served: " << served << endl;
		cout << "         turnaways: " << turnaway << endl;
		cout << "average queue size: ";
		cout.precision(2);
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout << (double)sum_line / cyclelimit << endl;
		cout << " average awit time: "
			<< (double)line_wait / served << " minutes\n";
	}
	else
		cout << "No customers!\n";
	cout << "Done!\n";
}

// x = average time, in minutes, between customers
// return value is true if customer shows up this minute
bool newcustomer(double x)
{
	return (std::rand() * x / RAND_MAX < 1);
}

// when is the time at which the customer arrives
// the arrival time is set to when and the processing
// time set to a random value in the range 1 - 3
void Customer::set(long when)
{
	processtime = std::rand() % 3 + 1;
	arrive = when;
}