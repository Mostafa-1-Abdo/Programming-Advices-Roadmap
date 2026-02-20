#include <iostream>
#include <cmath>
using namespace std;

float ReadNumber(const string& Message)
{
	float Number;
	cout << Message << "\n";
	cin >> Number;
	return Number;
}

float GetFractionPart(float Number)
{
	return Number - (int)Number;
}
int Myfloor(float Number)
{
	if (Number >= 0)
		return Number;
	else
	{
		if (-GetFractionPart(Number) != 0)
			return --Number;
		return Number;
	}
}

int main()
{
	float Number = ReadNumber("Enter a number");

	cout << "\n\nMy floor result = " << Myfloor(Number) << endl;
	cout << "C++ floor result = " << floor(Number) << endl;
	return 0;
}