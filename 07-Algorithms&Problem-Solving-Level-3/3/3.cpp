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

int MatrixRowSum(const int Matrix[3][3], const short& Row, const short& Cols)
{
	int RowSum = 0;

	for (short j = 0; j < Cols; j++)
	{
		RowSum += Matrix[Row][j];
	}

	return RowSum;
} 
void MatrixSaveRowsSumInArray(const int Matrix[3][3],const short &Rows,const short &Cols, int arMatrixRowsSum[3])
{
	for (short i = 0; i < Rows; i++)
		arMatrixRowsSum[i] = MatrixRowSum(Matrix, i, Cols);
}


void PrintMatrixSumEachRow(const int Matrix[3][3], const short& Rows, const short& Cols, int arMatrixRowsSum[3])
{
	MatrixSaveRowsSumInArray(Matrix, Rows, Cols, arMatrixRowsSum);
	for (short i = 0; i < Rows; i++)
		cout << "Row " << i + 1 << " sum = " << arMatrixRowsSum[i] << "\n";
}

int main()
{
	srand((unsigned)time(NULL));

	int maRandomNumbers[3][3];
	int arMatrixRowsSum[3];

	MatrixFillWithRandomNumbers(maRandomNumbers, 3, 3);

	MatrixPrint(maRandomNumbers, 3, 3);
	cout << endl << endl;

	PrintMatrixSumEachRow(maRandomNumbers, 3, 3, arMatrixRowsSum);
	cout << endl << endl;
}