#include <iostream>
#include <cstdlib>
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
		 Array[i]= RandomNumberInRange(1, 100);
	}
	cout << endl;
}

void PrintArray(int Array[100], const short& ArrayLength)
{
	cout << "\n\nArray Elements : ";
	for (short i = 0; i < ArrayLength; i++)
	{
		cout << Array[i] << " ";
	}
	cout << endl;
}

int main()
{
	srand((unsigned)time(NULL));

	int Array[100];
	short ArrayLength;
	FillArrayWithRandomNumbers(Array, ArrayLength);

	PrintArray(Array, ArrayLength);


	return 0;
}