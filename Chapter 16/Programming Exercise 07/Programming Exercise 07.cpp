// Programming Exercise 07.cpp
#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>

using namespace std;

vector<int> GetWinningNumbers(int maxNum, int numCount);

int main()
{
	cout << "Welcome to the lottery!" << endl;
	cout << "Please enter the maximum number possible, followed by the amount of winning numbers: ";

	int maxNum, numCount;
	maxNum = numCount = 0;
	vector<int> winningNumbers;

	srand(time(0));

	while (cin >> maxNum >> numCount)
	{
		cout << "You've chosed " << maxNum << " as the highest value, with "
			<< numCount << " winning numbers!" << endl;

		winningNumbers = GetWinningNumbers(maxNum, numCount);

		cout << "And the winning numbers are:\n";

		for (int i = 0; i < winningNumbers.size(); i++)
			cout << winningNumbers[i] << endl;

		cout << endl;
		cout << "Please enter another value set or quit using q: ";
	}

	cout << "Baiii!\n";
}

vector<int> GetWinningNumbers(int maxNum, int numCount)
{
	vector<int> winningNumbers;

	while (winningNumbers.size() < numCount)
	{
		int randomNumber = rand() % maxNum;

		if (find(winningNumbers.begin(), winningNumbers.end(), randomNumber) == winningNumbers.end())
			winningNumbers.push_back(randomNumber);
	}

	return winningNumbers;
}