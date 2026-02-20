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

float Myabs(float Number)
{
	if (Number >= 0)
		return Number;
	return -Number;
}

int main()
{
	float Number = ReadNumber("Enter a number");

	cout << "\n\nMy abs result = " << Myabs(Number) << endl;
	cout << "C++ abs result = " << abs(Number) << endl;

	return 0;
}