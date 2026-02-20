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
void FillArrayFrom1toN(int Array[100], short& ArrayLength)
{
	ArrayLength = ReadPositiveNumber("How many elements you want to store");
	for (short i = 0; i < ArrayLength; i++)
	{
		Array[i] = i + 1;
	}
	cout << endl;
}

void Swap(int &Number1, int &Number2)
{
	int Temp;
	Temp = Number1;
	Number1 = Number2;
	Number2 = Temp;
}
short RandomNumberInRange(short From, short To)
{
	return rand() % (To - From + 1) + From;
}
void ShuffleArray( int Array1[100], const short& Array1Length, int Array2[100], short& Array2Length)
{
	Array2Length = Array1Length;
	for (short i = 0; i < Array1Length; i++)
	{
		Swap(Array1[i], Array1[RandomNumberInRange(i, Array1Length - 1)]);
		Array2[i] = Array1[i];
	}

}

void PrintArray(const int Array[100], const short& ArrayLength, const string& Message)
{
	cout << "\n\n" << Message<<" : ";
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
	short Array1Length;
	FillArrayFrom1toN(Array1,Array1Length);

	int Array2[100];
	short Array2Length;
	ShuffleArray(Array1, Array1Length, Array2, Array2Length);

	PrintArray(Array1, Array1Length, "Array elements before shuffle");
	PrintArray(Array2, Array2Length, "Array elements after shuffle");
	return 0;
}