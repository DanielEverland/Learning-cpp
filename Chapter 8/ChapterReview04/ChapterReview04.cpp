// ChapterReview04.cpp

#include <iostream>

using namespace std;

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void questionA(box& b)
{
	cout << "Maker: " << b.maker << endl;
	cout << "Height: " << b.height << endl;
	cout << "Width: " << b.width << endl;
	cout << "Length: " << b.length << endl;
	cout << "Volume: " << b.volume << endl;
}

void questionB(box& b)
{
	b.volume = b.height * b.width * b.length;
}