#include <iostream>
using namespace std;

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

void PrintAverage3Numbers(const float& Average)
{
	cout << "\nThe average of 3 nubmers is " << Average << endl;
}


int main()
{
	PrintAverage3Numbers(Average3Numbers(Sum3Numbers(ReadNumber("Enter Number 3"), ReadNumber("Enter Number 2"), ReadNumber("Enter Number 1"))));

	return 0;
}