#include <iostream>
#include <iomanip>
using namespace std;

short GetRandomNumber(short From, short To)
{
	return rand() % (To - From + 1) + From;
}
void MatrixFillWithRandomNumbers(int Matrix[3][3], const short& Rows, const short& Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
			Matrix[i][j] = GetRandomNumber(1, 10);
	}
}

void MatrixPrint(const int Matrix[3][3], const short& Rows, const short& Cols, const string Message = "Matrix elements : ")
{
	cout << Message << "\n";
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
			printf("%02d    ", Matrix[i][j]);
		cout << "\n";
	}
}

int MatrixSumElements(const int Matrix[3][3], const short& Rows, const short& Cols)
{
	int Sum = 0;

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
			Sum += Matrix[i][j];
	}

	return Sum;
}

int main()
{
	srand((unsigned)time(NULL));

	int maRandomNumbers[3][3];

	MatrixFillWithRandomNumbers(maRandomNumbers, 3, 3);
	MatrixPrint(maRandomNumbers, 3, 3, "Matrix elements : ");
	cout << endl << endl;

	cout<<"Sum of matrix elements = " << MatrixSumElements(maRandomNumbers, 3, 3);
	cout << endl << endl;
}