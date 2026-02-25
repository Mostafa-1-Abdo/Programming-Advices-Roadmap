#include <iostream>
using namespace std;

short ReadPositiveNumber()
{
	short Number;
	do {
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

void PrintHeader(short From, short To)
{
	cout << "\t\t\tMultipliaction Table From " << From << " To " << To<<"\n";
	for (short i = From; i <= To; i++)
		cout << "\t" << i;
	cout <<"\n";
}
void PrintMutiplicatonFrom1To10(short Number)
{
	for (short i = 1; i <= 10; i++)
		cout << Number * i<<"\t";
}
void PrintBody(short From, short To)
{
	cout << "_________________________________________________________________________________\n";
	for (short i = From; i <= To; i++)
	{
		cout << i;
		if(i<10)
			cout<<"   |" << "\t";
		else
			cout << "  |" << "\t";
		PrintMutiplicatonFrom1To10(i);
		cout << "\n";
	}
}
void PrintTable()
{
	short From;
	short To;
	cout << "Multipliaction tabel from ";
	From = ReadPositiveNumber();
	cout << From;
	cout << " to ";
	To=ReadPositiveNumber();
	cout << To;
	PrintHeader(From, To);
	PrintBody(From, To);
}

int main()
{
	PrintTable();

	return 0;
}