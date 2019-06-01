// usebrass3.cpp -- polymorphic example using an abstract base class

#include <iostream>
#include <string>
#include "dma.h"

const int CLIENTS = 3;

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;

	DMAABC* p_clients[CLIENTS];
	char temp[100];
	char kind;
	int rating;

	for (int i = 0; i < CLIENTS; i++)
	{
		cout << "Enter 1 for baseDMA, 2 for lacksDMA and 3 for hasDMA: ";

		while (cin >> kind && (kind != '1' && kind != '2' && kind != '3'))
			cout << "Enter either 1, 2 or 3: ";

		cout << "Please enter the label: ";
		cin >> temp;

		cout << "Please enter a rating: ";
		cin >> rating;

		if (kind == '1')
		{
			p_clients[i] = new baseDMA(temp, rating);
		}
		else if (kind == '2')
		{
			char color[100];

			cout << "Please enter a color: ";
			cin >> color;

			p_clients[i] = new lacksDMA(color, temp, rating);
		}
		else if(kind == '3')
		{
			char style[100];

			cout << "Please enter style: ";
			cin >> style;

			p_clients[i] = new hasDMA(style, temp, rating);
		}
		else
		{
			cout << "----------ERROR---------" << endl;
			cout << " COULDN'T IDENTIFY KIND " << endl;
			cout << "----------ERROR---------" << endl;

			continue;
		}
	}

	cout << endl;

	for (int i = 0; i < CLIENTS; i++)
	{
		p_clients[i]->View();
		cout << endl;
	}

	for (int i = 0; i < CLIENTS; i++)
	{
		delete p_clients[i]; // free memory
	}

	cout << "Done.\n";
}