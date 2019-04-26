/* ChapterReview03.cpp
Write a function that takes three arguments: the name of an int array, the array
size, and an int value. Have the function set each element of the array to the int
value.*/

void func(int[], int, int);
void func(int arr[], int size, int value)
{
	for (int i = 0; i < size; i++)
		arr[i] = value;
}