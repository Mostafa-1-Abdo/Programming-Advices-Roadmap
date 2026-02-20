#include <iostream>
#include <iomanip>
using namespace std;

int GetRandomNumber(int From, int To)
{
	return rand() % (To - From + 1) + From;
}
void MatrixFillWithRandomNumbers(int Matrix[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
			Matrix[i][j] = GetRandomNumber(1, 100);
	}
}

void MatrixPrint(int Matrix[3][3], short Rows, short Cols)
{
	cout << "Matrix array elements : \n";
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
			cout << setw(3) << Matrix[i][j] << "	";
		cout << "\n";
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int maRandomNumbers[3][3];

	MatrixFillWithRandomNumbers(maRandomNumbers, 3, 3);

	MatrixPrint(maRandomNumbers, 3, 3);
}