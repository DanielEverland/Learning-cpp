/*Write a function that takes a double array name and an array size as arguments and
returns the largest value in that array. Note that this function shouldn't alter the
contents of the array*/

double func(const double arr[], int size)
{
	double largest = arr[0];

	for (int i = 0; i < size; i++)
	{
		if (largest < arr[i])
			largest = arr[i];
	}

	return largest;
}