#include <iostream>
using namespace std;

enum enNumberStatus { Positive, Zero, Negative };

enNumberStatus CheckNumberStatus(const int& Number)
{
	return Number >= 0 ? (Number > 0 ? enNumberStatus::Positive : enNumberStatus::Zero) : enNumberStatus::Negative;
}
void PrintNumberStatus(const int& Number)
{
	enNumberStatus NumberStatus = CheckNumberStatus(Number);
	NumberStatus == enNumberStatus::Positive ? cout << "Positive" : (NumberStatus == enNumberStatus::Zero ? cout << "Zero" : cout << "Negative");
}

int main()
{
	PrintNumberStatus(-85);

	return 0;
}