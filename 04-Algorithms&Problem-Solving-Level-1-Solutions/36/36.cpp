#include <iostream>
using namespace std;

float ReadNumber(const string& Message)
{
	float Number;
	cout << Message << "\n";
	cin >> Number;
	return Number;
}

char ReadOperationType()
{
	char OperationType;
	cout << "Enter operation type (+, -, *, /):\n";
	cin >> OperationType;
	return OperationType;
}

float CalculateResult(const float& Number1,const float& Number2, const char & OperationType)
{
	cout << "\n\n";
	switch(OperationType)
	{
	case '+':
		return Number1 + Number2;
	case '-':
		return Number1 - Number2;
	case '*':
		return Number1 * Number2;
	case '/':
		if (Number2 == 0)
		{
			cout << "Math Error\n";
			exit(1);
		}
		return Number1 / Number2;
	default :
		cout << "Math Error\n";
		exit(1);
	}
}

void PrintResult(const float& Number1, const float& Number2, const char& OperationType)
{
	cout << Number1<<" " << OperationType<<" " << Number2 << " = " << CalculateResult(Number1, Number2, OperationType) << endl;
}

int main()
{
	float Number1 = ReadNumber("Enter number 1");
	float Number2 = ReadNumber("Enter number 2");

	PrintResult(Number1, Number2, ReadOperationType());

	return 0;
}