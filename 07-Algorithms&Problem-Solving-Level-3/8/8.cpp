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

void Matrix_2_MultiplyElements(const int Matrix1[3][3],const int Matrix2[3][3], int Matrix3[3][3],const short &Rows, const short& Cols)
{
	for (short i = 0; i < Rows; i++)
		for (short j = 0; j < Cols; j++)
			Matrix3[i][j] = Matrix1[i][j] * Matrix2[i][j];
}

void MatrixPrint(const int Matrix[3][3], const short& Rows, const short& Cols, const string Message = "Matrix elements : ")
{
	cout << Message << "\n";
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
			printf("%03d    ", Matrix[i][j]);
		cout << "\n";
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int ma1OrderNumbers[3][3];
	int ma2OrderNumbers[3][3];
	int maMultiplyResult[3][3];

	MatrixFillWithRandomNumbers(ma1OrderNumbers, 3, 3);
	MatrixPrint(ma1OrderNumbers, 3, 3,"Matrix1 : ");
	cout << endl << endl;
	MatrixFillWithRandomNumbers(ma2OrderNumbers, 3, 3);
	MatrixPrint(ma2OrderNumbers, 3, 3, "Matrix2 : ");
	cout << endl << endl;

	Matrix_2_MultiplyElements(ma1OrderNumbers, ma2OrderNumbers, maMultiplyResult, 3, 3);
	MatrixPrint(maMultiplyResult, 3, 3, "Result : ");
	cout << endl << endl;
}