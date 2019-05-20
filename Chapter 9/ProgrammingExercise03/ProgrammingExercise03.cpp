// ProgrammingExercise03.cpp

#include <iostream>

struct chaff
{
	char dross[20];
	int slag;
};

void populateChaff(chaff*);
void displayChaffs(chaff*);

int bufferSize = 2;
chaff* buffer = new chaff[bufferSize];

int main()
{
	chaff* firstChaff = new(buffer) chaff;
	chaff* secondChaff = new(buffer + 1) chaff;

	populateChaff(firstChaff);
	populateChaff(secondChaff);

	displayChaffs(buffer);
}
void populateChaff(chaff* c)
{
	std::cout << "Please enter dross: ";
	std::cin.getline(c->dross, 20);

	std::cout << "Please enter slag: ";
	std::cin >> c->slag;
	std::cin.get();
}
void displayChaffs(chaff* buffer)
{
	using std::cout;
	using std::endl;

	for (int i = 0; i < bufferSize; i++)
		cout << "Chaff #" << i + 1 << ": " << buffer[i].dross << ", " << buffer[i].slag << endl;
}