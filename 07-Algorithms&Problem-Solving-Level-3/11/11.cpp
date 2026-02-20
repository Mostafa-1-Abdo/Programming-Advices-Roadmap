#include <iostream>
using namespace std;

short GetRandomNumber(short From, short To)
{
	return rand() % (To - From + 1) + From;
}
void MatrixFillWithRandomNumbers(int Matrix[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
			Matrix[i][j] = GetRandomNumber(1, 10);
	}
}

void MatrixPrint(int Matrix[3][3], short Rows, short Cols, const string& Message)
{
	cout << Message << "\n";
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
			printf("%02d	", Matrix[i][j]);
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
bool MatricesAreSumElementsEqual(const int Matrix1[3][3],const int Matrix2[3][3])
{
	return MatrixSumElements(Matrix1, 3, 3) == MatrixSumElements(Matrix2, 3, 3);
}
void PrintEqualResult(int Matrix1[3][3], int Matrix2[3][3])
{
	cout << "The matrices are " << (MatricesAreSumElementsEqual(Matrix1, Matrix2) ? "equal" : "not equal");
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

	PrintEqualResult(ma1RandomNumbers, ma2RandomNumbers);
	cout << endl << endl;
}