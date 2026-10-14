#include <iostream>
using namespace std;

short ReadPositiveNumber(const string& Message)
{
	short Number;
	do {
		cout << Message << "\n";
		cin >> Number;
	} while (Number <= 0);
	return Number;
}
short RandomNumberInRange(short From, short To)
{
	return rand() % (To - From + 1) + From;
}
void FillArrayWithRandomNumbers(int Array[100], short& ArrayLength)
{
	ArrayLength = ReadPositiveNumber("How many elements you want to store");
	for (short i = 0; i < ArrayLength; i++)
	{
		Array[i] = RandomNumberInRange(1, 100);
	}
	cout << endl;
}

void PrintArray(const int Array[100], const short& ArrayLength, const string& Message)
{
	cout << "\n" << Message << " : ";
	for (short i = 0; i < ArrayLength; i++)
	{
		cout << Array[i] << " ";
	}
	cout << endl;
}

short FindNunberPositionInArray(const int Array[100], const short& ArrayLength, const int& NumberToSearch)
{
	for (short i = 0; i < ArrayLength; i++)
	{
		if (NumberToSearch == Array[i])
			return i;
	}
	return -1;
}
void PrintResult(const int Array[100], const short& ArrayLength, const int& NumberToSearch)
{
	short Index = FindNunberPositionInArray(Array,ArrayLength, NumberToSearch);
	cout << "\n\nNumber you are looking for is : " << NumberToSearch << "\n";
	if (Index != -1)
		cout << "Index = " << Index;
	else
		cout << "The number is not found";
	cout << endl;

}

int main()
{
	srand((unsigned)time(NULL));

	int Array[100];
	short ArrayLength;

	FillArrayWithRandomNumbers(Array, ArrayLength);

	PrintArray(Array, ArrayLength,"Array elements : ");

	int NumberToSearch = ReadPositiveNumber("\n\nEnter number search for");

	PrintResult(Array, ArrayLength, NumberToSearch);


	return 0;
}