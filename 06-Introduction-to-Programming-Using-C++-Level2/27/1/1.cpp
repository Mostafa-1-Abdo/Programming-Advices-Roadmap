#include <iostream>
using namespace std;

int main()
{
	int Array[10][10];

	for (short i = 0; i < 10; i++)
	{
		for (short j = 0; j < 10; j++)
		{
			Array[i][j] = (i + 1) * (j + 1);
		}
	}

	for (short i = 0; i < 10; i++)
	{
		for (short j = 0; j < 10; j++)
		{
			printf("%02d ", Array[i][j]);
		}
		cout << "\n";
	}

	return 0;
}