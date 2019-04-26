// ProgrammingExercise03.cpp

#include <iostream>

struct box
{
	char maker[30];
	float height;
	float width;
	float length;
	float volume;
};

void display(box);
void setVolume(box*);

using namespace std;

int main()
{
	box a
	{
		"McGotham Factory",
		2,
		1.5,
		0.5,
	};

	setVolume(&a);
	display(a);
}

void display(box b)
{
	cout << "Box is made by " << b.maker << "."
		" Dimensions: (L: " << b.length << ", W: " << b.width << ", H: " << b.height << ")\n"
		"Volume: " << b.volume;
}
void setVolume(box* b)
{
	b->volume = b->height * b->length * b->width;
}