#include <iostream>
using namespace std;

int ReadNumber(const string& Message)
{
	int Number;
	cout << Message << "\n";
	cin >> Number;
	return Number;
}
void FillArray(int Array[100], short& ArrayLength)
{
	ArrayLength = ReadNumber("How many elements you want to store");
	for (short i = 0; i < ArrayLength; i++)
	{
		cout << "Element [" << i + 1 << "] : ";
		cin >> Array[i];
	}
	cout << endl;
}

void AddArrayElement(const int& Number, int Array[100], short& ArrayLength)
{
	Array[ArrayLength] = Number;
	ArrayLength++;
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
bool CheckNumberInArray(const int Array[100], const short& ArrayLength, const int& NumberToSearch)
{
	return FindNunberPositionInArray(Array, ArrayLength, NumberToSearch) != -1;
}
void CopyDistinctNumbers(const int Array1[100],const short &Array1Length, int Array2[100], short& Array2Length)
{
	for (short i = 0; i < Array1Length; i++)
	{
		if (!CheckNumberInArray(Array1, i, Array1[i]))
		AddArrayElement(Array1[i], Array2, Array2Length);
	}
}

void PrintArray(const int Array[100], const short& ArrayLength, const string& Message)
{
	cout << "\n\n" << Message << " : ";
	for (short i = 0; i < ArrayLength; i++)
	{
		cout << Array[i] << " ";
	}
	cout << endl;

}

int main()
{
	int Array1[100];
	short Array1Length =0;

	FillArray(Array1, Array1Length);

	int Array2[10];
	short Array2Length = 0;

	CopyDistinctNumbers(Array1, Array1Length, Array2, Array2Length);

	PrintArray(Array1, Array1Length, "Array 1 elements");
	PrintArray(Array2, Array2Length, "Array 2 distinct elements");

	return 0;
}