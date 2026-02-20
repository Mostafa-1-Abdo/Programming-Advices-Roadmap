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
char GetRandomChar(const enCharType &CharType)
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

string GenerateWord(const enCharType &CharType, const short& Length)
{
	string Word = "";
	for (short i = 1; i <= Length; i++)
		Word += GetRandomChar(CharType);
	return Word;
}
string GenerateRandomKey(const enCharType& CharType, const short& Length)
{
	string Key="";
	Key = GenerateWord(CharType, Length) + "-";
	Key += GenerateWord(CharType, Length) + "-";
	Key += GenerateWord(CharType, Length) + "-";
	Key += GenerateWord(CharType, Length);
	return Key;
}
void PrintRandomKeys(const short &Number,const enCharType& CharType, const short& Length)
{
	for (short i = 1; i <= Number; i++)
		cout <<"Key ["<<i<<"] : " <<GenerateRandomKey(CharType, Length) << endl;
}

int main()
{
	srand((unsigned)time(NULL));
	
	short KeysNumber = ReadPositiveNumber("Enter number of keys");
	enCharType CharType=(enCharType)ReadNumberInRange("(1)Digit\n(2)Capital Letter\n(3)Small Letter\n(4)Special Character\n___________________________________", 1, 4);
	short WordLength = ReadPositiveNumber("Enter word length");
	PrintRandomKeys(KeysNumber, CharType, WordLength);

	return 0;
}