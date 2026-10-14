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
void FillArrayWithRandomNumbers(int Array[100],const short &ArrayLength)
{
	for (short i = 0; i < ArrayLength; i++)
	{
		Array[i] = RandomNumberInRange(1, 100);
	}
	cout << endl;
}

void Sum2Array(const int Array1[100], const short& Array1Length, int Array2[100], short& Array2Length, int Array3[100],  short& Array3Length)
{
	Array3Length = Array1Length;
	for (short i = 0; i < Array1Length; i++)
		Array3[i] = Array1[i] + Array2[i];
}

void PrintArray(const int Array[100], const short& ArrayLength,const string &Message)
{
	cout << "\n\n" << Message;
	for (short i = 0; i < ArrayLength; i++)
	{
		cout << Array[i] << " ";
	}
	cout << endl;
}

int main()
{
	srand((unsigned)time(NULL));

	int Array1[100];
	short Array1Length= ReadPositiveNumber("How many elements you want to store");
	FillArrayWithRandomNumbers(Array1, Array1Length);

	int Array2[100];
	short Array2Length= Array1Length;
	FillArrayWithRandomNumbers(Array2, Array2Length);

	int Array3[100];
	short Array3Length;
	Sum2Array(Array1, Array1Length, Array2, Array2Length, Array3, Array3Length);


	PrintArray(Array1, Array1Length,"Array 1 elements : ");
	PrintArray(Array2, Array2Length,"Array 2 elements : ");
	PrintArray(Array3, Array3Length,"Array 3 elements : ");

	return 0;
}