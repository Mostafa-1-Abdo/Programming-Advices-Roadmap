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
short ReadNumberInRange(const string& Message, const short& From, const short& To)
{
	short Number;
	do {
		Number = ReadNumber(Message);
	} while (!(ValidatNumberInRange(Number, From, To)));
	return Number;
}

bool AddMoreNumbers()
{
	return ReadNumberInRange("Do you want to add more number ? [0=NO,1=Yes]", 0, 1)==1;
}
void AddArrayElement(const float &Number,float Array[100], short& ArrayLength)
{
	Array[ArrayLength] = Number;
	ArrayLength++;
}

void AllocateSemiDynamicArray(float Array[100],short &ArrayLength)
{
	ArrayLength = 0;
	do {
		AddArrayElement(ReadNumber("Enter a number"),Array, ArrayLength);
	} while (AddMoreNumbers() && ArrayLength < 100);
}

void PrintArray(const float Array[100], const short& ArrayLength, const string& Message)
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
	float Array[100];
	short ArrayLength;
	AllocateSemiDynamicArray(Array, ArrayLength);

	PrintArray(Array, ArrayLength, "Array elements");

	return 0;
}