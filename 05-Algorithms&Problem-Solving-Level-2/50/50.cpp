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

float Mysqrt(float Number)
{
	return pow(Number, 0.5);
}

int main()
{
	float Number = ReadNumber("Enter a number");

	cout << "\n\nMy sqrt result = " << Mysqrt(Number) << endl;
	cout << "C++ sqrt result = " << sqrt(Number) << endl;
	return 0;
}