#include <iostream>
using namespace std;

float ReadNumber(const string& Message)
{
	float Number;
	cout << Message << "\n";
	cin >> Number;
	return Number;
}

void Swap2Numbers(float& Number1, float& Number2)
{
	float Temp;
	Temp = Number1;
	Number1 = Number2;
	Number2 = Temp;
}

void PrintNumbers(const float& Number1,const float& Number2)
{
	cout << "\nNumber 1 = " << Number1;
	cout << "\nNumber 2 = " << Number2 << endl;
}

int main()
{
	float Number1 = ReadNumber("Enter Number 1");
	float Number2 = ReadNumber("Enter Number 2");

	cout << "\n\nThe numbers before swap";
	PrintNumbers(Number1, Number2);

	cout << "\n\nThe numbers after swap";
	Swap2Numbers(Number1, Number2);
	PrintNumbers(Number1, Number2);
	return 0;
}