#include <iostream>
using namespace std;

float ReadNumber(const string& Message)
{
	float Number;
	cout << Message << "\n";
	cin >> Number;
	return Number;
}

bool ValidatNumberInRange(short Number, short From, short To)
{
	return Number >= From && Number <= To;
}

float ReadNumberInRange(const string& Message, const short& From, const short& To)
{
	float Number;
	do {
		Number = ReadNumber(Message);
	} while (!(ValidatNumberInRange(Number, From, To)));
	return Number;
}
char GetStudentGrade(const short& Grade)
{
	if (Grade <= 100 && Grade >= 90)
		return 'A';
	if (Grade <= 89 && Grade >= 80)
		return 'B';
	if (Grade <= 79 && Grade >= 70)
		return 'C';
	if (Grade <= 69 && Grade >= 60)
		return 'D';
	if (Grade <= 59 && Grade >= 50)
		return 'E';
	else
		return 'F';
}

void PrintResult(const char &Result)
{
	cout << "Your Reuslt is : " << Result << endl;
}

int main()
{
	PrintResult(GetStudentGrade(ReadNumberInRange("Enter your grade", 0, 100)));
	return 0;
}