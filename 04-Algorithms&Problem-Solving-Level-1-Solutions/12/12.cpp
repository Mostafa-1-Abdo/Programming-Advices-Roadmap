#include <iostream>
using namespace std;

enum enMax { Number1, Number2, Equal };

float ReadNumber(const string& Message)
{
	float Number;
	cout << Message << "\n";
	cin >> Number;
	return Number;
}

enMax CheckMaxOf2Numbers(const float& Number1, const float& Number2)
{
	if (Number1 > Number2)
		return enMax::Number1;
	else if (Number1 < Number2)
		return enMax::Number2;
	else
		return enMax::Equal;
}

void PrintMaxOf2Numbers(const float& Number1, const float& Number2)
{
	enMax ComparisonResult = CheckMaxOf2Numbers(Number1, Number2);
	cout << "\n\nMax = ";
	if (ComparisonResult == enMax::Number1)
		cout << "Number1 = " << Number1;
	else if (ComparisonResult == enMax::Number2)
		cout << "Number2 = " << Number2;
	else
		cout << "Number1 = Number2 =  " << Number1;
	cout << "\n";
}

//void PrintMaxOf2Numbers(const float& Number1, const float& Number2)
//{
//	float Max = Number1;
//
//	if (Max < Number2)
//		Max = Number2;
//
//	cout << "Max = ";
//
//	if (Max == Number1)
//		cout << "Number1 = ";
//	if (Max == Number2)
//		cout << "Number2 = ";
//	cout << Max << endl;
//}

int main()
{
	float Number1 = ReadNumber("Enter number 1");
	float Number2 = ReadNumber("Enter number 2");
	PrintMaxOf2Numbers(Number1, Number2);

	return 0;
}