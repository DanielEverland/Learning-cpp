/* ChapterReview04.cpp
Write a function that takes three arguments: a pointer to the first element of a
range in an array, a pointer to the element following the end of a range in an array,
and an int value. Have the function set each element of the array to the int value.*/

void func(int* start, int* end, int value)
{
	while (start != end)
	{
		*start = value;
		start++;
	}
}