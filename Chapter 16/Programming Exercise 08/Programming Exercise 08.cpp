// Programming Exercise 08.cpp
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<string> GetList();

int main()
{
	vector<string> matList;
	vector<string> patList;
	vector<string> mergedContainer;

	cout << "Please enter a list of Mat's friends: ";
	matList = GetList();

	cout << "Please enter a list of Pat's friends: ";
	patList = GetList();

	mergedContainer.insert(mergedContainer.begin(), matList.begin(), matList.end());
	mergedContainer.insert(mergedContainer.begin(), patList.begin(), patList.end());
	sort(mergedContainer.begin(), mergedContainer.end());
	unique(mergedContainer.begin(), mergedContainer.end());

	cout << "Here's all the merged friends: " << endl;
	for (int i = 0; i < mergedContainer.size(); i++)
		cout << mergedContainer[i] << endl;
}

vector<string> GetList()
{
	vector<string> toReturn;
	string temp;
	
	while (cin >> temp && temp != "q")
		toReturn.push_back(temp);

	return toReturn;
}