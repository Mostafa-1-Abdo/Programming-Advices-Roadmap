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
int Myceil(float Number)
{
	if (Number >= 0)
	{
		if (GetFractionPart(Number) != 0)
			return ++Number;
		return Number;
	}
	else
		return Number;	
}

int main()
{
	float Number = ReadNumber("Enter a number");

	cout << "\n\nMy ceil result = " << Myceil(Number) << endl;
	cout << "C++ ceil result = " << ceil(Number) << endl;
	return 0;
}