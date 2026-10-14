#include <iostream>
using namespace std;

enum enCharType { Digit = 1, CapitalLetter, SmallLetter, SpecialCharacter };

short ReadPositiveNumber(const string& Message)
{
	short Number;
	do {
		cout << Message << "\n";
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

short ReadNumber(const string& Message)
{
	short Number;
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

short RandomNumberInRange(short From, short To)
{
	return rand() % (To - From + 1) + From;
}
char GetRandomChar(const enCharType& CharType)
{
	switch (CharType)
	{
	case enCharType::Digit:
		return  RandomNumberInRange(48, 57);
	case enCharType::CapitalLetter:
		return RandomNumberInRange(65, 90);
	case enCharType::SmallLetter:
		return  RandomNumberInRange(97, 122);
	case enCharType::SpecialCharacter:
		return  RandomNumberInRange(33, 47);
	}
}
string GenerateWord(const enCharType& CharType, const short& Length)
{
	string Word = "";
	for (short i = 1; i <= Length; i++)
		Word += GetRandomChar(CharType);
	return Word;
}
string GenerateRandomKey(const enCharType& CharType, const short& WordLength)
{
	string Key = "";
	Key = GenerateWord(CharType, WordLength) + "-";
	Key += GenerateWord(CharType,WordLength) + "-";
	Key += GenerateWord(CharType,WordLength) + "-";
	Key += GenerateWord(CharType,WordLength);
	return Key;
}
void FillArrayWithKeys(string Array[100],const short& ArrayLength, const enCharType& CharType, const short& WordLength)
{
	
	for (short i = 0; i < ArrayLength; i++)
	{
		Array[i] = GenerateRandomKey(CharType, WordLength);
	}
	cout << endl;
}

void PrintArray(const string Array[100], const short& ArrayLength, const string& Message)
{
	cout << "\n\n" << Message << " : \n";
	for (short i = 0; i < ArrayLength; i++)
	{
		cout <<"Array ["<<i+1<<"] : " << Array[i] << "\n";
	}
	cout << endl;
}

int main()
{
	srand((unsigned)time(NULL));

	string Array[100];
	short ArrayLength = ReadPositiveNumber("How many keys do you want to generate");
	enCharType CharType = (enCharType)ReadNumberInRange("(1)Digit\n(2)Capital Letter\n(3)Small Letter\n(4)Special Character\n___________________________________", 1, 4);
	short WordLength = ReadPositiveNumber("Enter word length");

	FillArrayWithKeys(Array,  ArrayLength, CharType, WordLength);

	PrintArray(Array, ArrayLength, "Array Elements");

	return 0;
}