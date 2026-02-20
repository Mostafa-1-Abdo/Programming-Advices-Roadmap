#include <iostream>
using namespace std;

void PrintWordsFromAAAtoZZZ()
{
	for (char i = 65; i <= 90; i++)
	{
		for (char j = 65; j <= 90; j++)
		{
			for (char n = 65; n <= 90; n++)
			{
				string Word = string() + i + j + n;
				cout << Word << "\n";
			}
			cout << "\n";
		}
		cout << "____________________________________________\n\n" << endl;
	}
}

int main()
{
	PrintWordsFromAAAtoZZZ();

	return 0;
}