#include <iostream>
using namespace std;

string ReadString(const string& Message)
{
	string String;
	cout << Message << "\n";
	cin >> String;
	return String;
}

string Guess3LetterPassword(const string& Password, int &Counter)
{
	for (char i = 65; i <= 90; i++)
	{
		for (char j = 65; j <= 90; j++)
		{
			for (char n = 65; n <= 90; n++)
			{
				string Word = string() + i + j + n;
				cout << "Trial [" << Counter << "] : " << Word << "\n";
				if (Password == Word)
				{
					return Word;
				}
				Counter++;
			}
		}
	}
}
void PrintResult(const string& Password)
{
	int Counter = 1;
	cout << "\n\nPassword is " << Guess3LetterPassword(Password,Counter) << "\n";
	cout << "Found After "<<Counter<<" Trial(s)" << endl;
}

int main()
{
	PrintResult(ReadString("Enter your password (3-Letter All Capital)"));

	return 0;
} 