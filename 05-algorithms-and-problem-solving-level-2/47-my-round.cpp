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
int Myround(float Number)
{
	if (abs(GetFractionPart(Number)) >= 0.5)
	{
		if(Number>0)
			return ++Number;
		return --Number;
	}
	return Number;
}

int main()
{
	float Number = ReadNumber("Enter a number");

	cout << "\n\nMy round result = " << Myround(Number) << endl;
	cout << "C++ round result = " << round(Number) << endl;
	return 0;
}