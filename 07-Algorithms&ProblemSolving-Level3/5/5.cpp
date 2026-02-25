#include <iostream>
#include <iomanip>
using namespace std;

int GetRandomNumber(int From, int To)
{
	return rand() % (To - From + 1) + From;
}
void MatrixFillWithRandomNumbers(int Matrix[3][3], const short& Rows, const short& Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
			Matrix[i][j] = GetRandomNumber(1, 100);
	}
}

void MatrixPrint(const int Matrix[3][3], const short& Rows, const short& Cols, const string Message = "Matrix elements : ")
{
	cout << Message << "\n";
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
			cout << Matrix[i][j] << "	";
		cout << "\n";
	}
}

int MatrixColSum(const int Matrix[3][3], const short& Rows, const short& Col)
{
	int ColSum = 0;
	for (short j = 0; j < Rows; j++)
	{
		ColSum += Matrix[j][Col];
	}
	return ColSum;
}
void MatrixSaveColsSumInArray(const int Matrix[3][3],const short &Rows, const short &Cols, int arMatrixColsSum[3])
{
	for (short i = 0; i < Cols; i++)
		arMatrixColsSum[i] = MatrixColSum(Matrix, Rows,i);
}

void MatrixPrintSumEachCol(const int Matrix[3][3], const short& Rows, const short& Cols, int arMatrixColsSum[3])
{
	MatrixSaveColsSumInArray(Matrix, Rows, Cols, arMatrixColsSum);
	for (short i = 0; i < Rows; i++)
		cout << "Col " << i + 1 << " sum = " << arMatrixColsSum[i] << "\n";
}

int main()
{
	srand((unsigned)time(NULL));

	int maRandomNumbers[3][3];
	int arMatrixColsSum[3];

	MatrixFillWithRandomNumbers(maRandomNumbers, 3, 3);

	MatrixPrint(maRandomNumbers, 3, 3);
	cout << endl << endl;

	MatrixPrintSumEachCol(maRandomNumbers, 3, 3, arMatrixColsSum);
	cout << endl << endl;
}