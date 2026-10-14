#include <iostream>
using namespace std;

void PrintLettersFromAtoZ()
{
	for (char i = 65; i <= 90; i++)
		cout << i << "\n";
	cout << endl;
}

int main()
{
	PrintLettersFromAtoZ();

	return 0;
}