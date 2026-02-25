#include <iostream>
#include <cstdlib>
using namespace std;

enum enCharType {Digit=1,CapitalLetter,SmallLetter,SpecialCharacter};

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
char GetRandomChar(const enCharType & CharType)
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
void PrintRandomChar()
{
	cout << "\n\n" << GetRandomChar((enCharType)ReadNumberInRange("(1)Digit\n(2)Capital Letter\n(3)Small Letter\n(4)Special Character\n___________________________________", 1, 4));
}


int main()
{
	srand((unsigned)time(NULL));

	PrintRandomChar();

	return 0;
}