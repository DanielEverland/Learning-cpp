// Programming Exercise 05.cpp
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

const char* matFilename = "mat.dat";
const char* patFilename = "pat.dat";
const char* outputFilename = "matnpat.dat";

vector<string> CreateContainerFromFile(const char* fileName);
void FileToSet(vector<string>& container, ifstream& file);
void DisplaySet(const vector<string>& container);

int main()
{
	vector<string> patNames = CreateContainerFromFile(matFilename);
	vector<string> matNames = CreateContainerFromFile(patFilename);

	DisplaySet(patNames);
	DisplaySet(matNames);
	
	vector<string> outputNames;
	outputNames.insert(outputNames.end(), patNames.begin(), patNames.end());
	outputNames.insert(outputNames.end(), matNames.begin(), matNames.end());
	sort(outputNames.begin(), outputNames.end());
	auto newEnd = unique(outputNames.begin(), outputNames.end());
	outputNames.erase(newEnd, outputNames.end());

	auto emptyIter = find(outputNames.begin(), outputNames.end(), "");
	if (emptyIter != outputNames.end())
		outputNames.erase(emptyIter);

	ofstream outputFile(outputFilename);
	for (auto i = outputNames.begin(); i != outputNames.end(); i++)
	{
		outputFile << *i;

		if (i + 1 != outputNames.end())
			outputFile << endl;
	}		
}

vector<string> CreateContainerFromFile(const char* fileName)
{
	vector<string> container;
	ifstream file(fileName);

	if (!file.is_open())
	{
		cout << "Cannot open file " << fileName;
		exit(EXIT_FAILURE);
	}

	FileToSet(container, file);

	sort(container.begin(), container.end());
	unique(container.begin(), container.end());

	return container;
}

void FileToSet(vector<string>& container, ifstream& file)
{
	string temp;
	while (file)
	{
		getline(file, temp);

		container.push_back(temp);
	}
}

void DisplaySet(const vector<string>& container)
{
	for (auto i = container.begin(); i != container.end(); i++)
		cout << *i << endl;
}