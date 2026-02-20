#include <iostream>
using namespace std;

enum enMarkStatus { Pass = 1, Fail };

float ReadNumber(const string& Message)
{
	float Number;
	cout << Message << "\n";
	cin >> Number;
	return Number;
}

float Sum3Numbers(const float& Number3, const float& Number2, const float& Number1)
{
	return Number1 + Number2 + Number3;
}

float Average3Numbers(const float& Sum)
{
	return Sum / 3;
}

enMarkStatus CheckAverageStatus(const short& Average)
{
	if (Average >= 50)
		return enMarkStatus::Pass;
	return enMarkStatus::Fail;
}

void PrintStatus(const short& Average)
{
	cout << "\nThe Average is " << Average <<"\n";
	if (CheckAverageStatus(Average) == enMarkStatus::Pass)
		cout << "Pass\n";
	else
		cout << "Fail\n";
}

int main()
{
	PrintStatus(Average3Numbers(Sum3Numbers(ReadNumber("Enter Mark 3"), ReadNumber("Enter Mark 2"), ReadNumber("Enter Mark 1"))));

	return 0;
}