#include <iostream>
using namespace std;

float ReadNumber(const string &Message)
{
	float Number;
	cout << Message<<"\n";
	cin >> Number;
	return Number;
}

float Sum3Numbers(const float& Number3, const float& Number2, const float& Number1)
{
	return Number1 + Number2 + Number3;
}

void PrintSum3Numbers(const float &Sum)
{
	cout << "\nThe sum of 3 nubmers is " << Sum << endl;
}


int main()
{
	PrintSum3Numbers(Sum3Numbers(ReadNumber("Enter Number 3"), ReadNumber("Enter Number 2"), ReadNumber("Enter Number 1")));

	return 0;
}