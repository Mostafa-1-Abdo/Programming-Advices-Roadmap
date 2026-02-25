#include <iostream>
using namespace std;

enum enMax { Number1, Number2,Number3,Number1_Number2,Number1_Number3,Number2_Number3,AllEqual };

float ReadNumber(const string& Message)
{
	float Number;
	cout << Message << "\n";
	cin >> Number;
	return Number;
}

enMax CheckMaxOf2Numbers(const float& Number1, const float& Number2, const float& Number3)
{
	if (Number1 > Number2 && Number1 > Number3)
		return enMax::Number1;
	else if (Number2 > Number1 && Number2 > Number3)
		return enMax::Number2;
	else if (Number3 > Number1 && Number3 > Number2)
		return enMax::Number3;
	else if (Number1 == Number2 && Number1 > Number3)
		return enMax::Number1_Number2;
	else if (Number1 == Number3 && Number1 > Number2)
		return enMax::Number1_Number3;
	else if (Number2 == Number3 && Number2 > Number1)
		return enMax::Number2_Number3;
	else
		return enMax::AllEqual;
}

void PrintMaxOf2Numbers(const float& Number1, const float& Number2, const float& Number3)
{
	enMax ComparisonResult = CheckMaxOf2Numbers(Number1, Number2,Number3);
	cout << "\n\nMax = ";
	if (ComparisonResult == enMax::Number1)
		cout << "Number1 = " << Number1;
	else if (ComparisonResult == enMax::Number2)
		cout << "Number2 = " << Number2;
	else if (ComparisonResult == enMax::Number3)
		cout << "Number3 = " << Number3;
	else if (ComparisonResult == enMax::Number1_Number2)
		cout << "Number1 = Number2 = " << Number1;
	else if (ComparisonResult == enMax::Number1_Number3)
		cout << "Number1 = Number3 = " << Number1;
	else if (ComparisonResult == enMax::Number2_Number3)
		cout << "Number2 = Number3 = " << Number2;
	else
		cout << "Number1 = Number2 = Number3 = " << Number1;
	cout << "\n";
}

//void PrintMaxOf2Numbers(const float& Number1, const float& Number2, const float& Number3)
//{
//	float Max = Number1;
//
//	if (Max < Number2)
//		Max = Number2;
//
//	if (Max < Number3)
//		Max = Number3;
//
//	cout << "Max = ";
//
//	if (Max == Number1)
//		cout << "Number1 = ";
//	if (Max == Number2)
//		cout << "Number2 = ";
//	if (Max == Number3)
//		cout << "Number3 = ";
//	cout << Max << endl;
//}

int main()
{
	float Number1 = ReadNumber("Enter number 1");
	float Number2 = ReadNumber("Enter number 2");
	float Number3 = ReadNumber("Enter number 3");

	PrintMaxOf2Numbers(Number1, Number2,Number3);

	return 0;
}