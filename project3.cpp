#include <iostream>
#include <vector>
#include <queue>
#include <fstream>

using namespace std;

class process
{
public:
	int arrivalTime;
	int processTime;
};

// Constructor functions
int insertion(string filename);

void combinations(vector<process>& inputData, int overheadTime, int timeQuanta);

int turnAroundTime(vector<process>& inputData);

int waitTime(vector<process>& inputData);

// Full Functions
int insertion(string filename)
{
	int arrivingTime;
	int processingTime;
	ifstream sourceFile;
	sourceFile.open(filename);
	vector<process> inputData;

	while (!sourceFile.eof())
	{
		process x;
		sourceFile >> arrivingTime >> processingTime;

		x.arrivalTime = arrivingTime;
		x.processTime = processingTime;
	}

	sourceFile.close();
	inputData.pop_back();
}

void combinations(vector<process>& inputData, int overheadTime, int timeQuanta)
{
	overheadTime = overheadTime * 0.001;
	timeQuanta = timeQuanta * 0.001;

	if (overheadTime == 0 && timeQuanta == 0.05)
	{

	}
	else if (overheadTime == 0 && timeQuanta == 0.1)
	{

	}
	else if (overheadTime == 0 && timeQuanta == 0.25)
	{

	}
	else if ()
}









/*
Input the Overhead Time: 0
Input Time Quanta: 50

Overhead Time: 0 ms.
Time Quanta: 50 ms.

Average Turn Around Time = 1500 s.
Average Wait Time = 200 s.
*/








int main()
{
	int overheadTime;
	int timeQuanta;
	
	cout << "Input the overhead time that the processor will be using: ";
	cin >> overheadTime;
	cout << endl;

	cout << "Input the time quanta that the processor will be using: ";
	cin >> timeQuanta;
	cout << endl;
	
	queue<int> processesQueue;
}