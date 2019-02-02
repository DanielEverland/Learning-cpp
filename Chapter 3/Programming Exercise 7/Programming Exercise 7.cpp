// Write a program that asks you to enter an automobile gasoline consumption figure in the European style (liters per 100 kilometers)
// and converts to the US style of miles per gallon.
// Note that in addition to using different units of measurement, the U.S. approach (distance / fuel) is the inverse of the European approach (fuel / distance).
// Note that 100 kilometers is 62.14 miles, and 1 gallon is 3.875 liters.
// Thus, 19 MPG is about 12.4 1/100 km, and 27 mpg is about 8.7 1/100 km.

#include "pch.h"
#include <iostream>

float const litersPerGallon = 3.875f;
float const milesPerKilometers = 0.6214f;

int main()
{
	using namespace std;

	float litersPer100Kilometers = 0;

	cout << "How many liters does your car use per kilometer? ";
	cin >> litersPer100Kilometers;
	
	float totalMiles = 100 * milesPerKilometers;
	float totalGallons = litersPer100Kilometers / litersPerGallon;

	float milesPerGallon = totalMiles / totalGallons;

	cout << "That would be ";
	cout << milesPerGallon;
	cout << " MPG.";
}