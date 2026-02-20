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

bool MatricesAreIdentical(const int Matrix1[3][3],const int Matrix2[3][3], const short& Rows,const short& Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix1[i][j] != Matrix2[i][j])
				return false;
		}
	}
	return true;
}
void PrintIdenticalResult(const int Matrix1[3][3],const int Matrix2[3][3], const short& Rows,const short& Cols)
{
	cout << "The matrices are " << (MatricesAreIdentical(Matrix1, Matrix2, Rows, Cols) ? "identical" : "not identical");
}

int main()
{
	srand((unsigned)time(NULL));

	int ma1RandomNumbers[3][3];
	int ma2RandomNumbers[3][3];

	MatrixFillWithRandomNumbers(ma1RandomNumbers, 3, 3);
	MatrixPrint(ma1RandomNumbers, 3, 3, "Matrix elements : ");
	cout << endl << endl;
	MatrixFillWithRandomNumbers(ma2RandomNumbers, 3, 3);
	MatrixPrint(ma2RandomNumbers, 3, 3, "Matrix elements : ");
	cout << endl << endl;

	PrintIdenticalResult(ma1RandomNumbers, ma2RandomNumbers,3,3);
	cout << endl << endl;
}