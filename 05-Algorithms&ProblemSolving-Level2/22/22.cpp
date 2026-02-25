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

float ReadNumber(const string& Message)
{
	float Number;
	cout << Message << "\n";
	cin >> Number;
	return Number;
}

void FillArray(float Array[100],short & ArrayLength)
{
	ArrayLength = ReadPositiveNumber("How many elements you want to store");
	for (short i = 0; i < ArrayLength; i++)
	{
		cout << "Element [" << i+1 << "] : ";
		cin >> Array[i];
	}
	cout << endl;
}

void PrintArray(float Array[100],const short & ArrayLength)
{
	cout << "\n\nArray Elements : ";
	for (short i = 0; i < ArrayLength; i++)
	{
		cout << Array[i] << " ";
	}
	cout << endl;
}

short GetTimesRepeatedNumberInArray(float Array[100], const short& ArrayLength,const float &Number)
{
	short Counter=0;
	for (short i = 0; i < ArrayLength; i++)
	{
		if (Number == Array[i])
			Counter++;
	}
	return Counter;
}
void PrintTimesRepeatedNumberInArray(float Array[100], const short&ArrayLength, const float& Number)
{
	cout << "\n\n";
	cout << Number << " is repeated " << GetTimesRepeatedNumberInArray(Array, ArrayLength,Number) << " tims (s) " << endl;
}

int main()
{
	float Array[100];
	short ArrayLength;
	FillArray( Array, ArrayLength);

	float Number = ReadNumber("Enter the number you want to check");

	PrintArray(Array, ArrayLength);

	PrintTimesRepeatedNumberInArray(Array, ArrayLength, Number);

	return 0;
}