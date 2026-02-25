#include <iostream>
using namespace std;

enum enNumberStatus {Positive,Negative};

enNumberStatus CheckNumberStatus(const int &Number)
{
	return Number > 0 ? enNumberStatus::Positive : enNumberStatus::Negative;
}
void PrintNumberStatus(const int& Number)
{
	CheckNumberStatus(Number) == enNumberStatus::Positive ? cout << "Positive" : cout << "Negative";
}

int main()
{
	PrintNumberStatus(85);

	return 0;
}