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
			printf("%02d	", Matrix[i][j]);
		cout << "\n";
	}
}

void MatrixPrintMiddleRow(const int Matrix[3][3],const short&  Rows, const short&  Cols)
{
	short MiddleRow = Rows / 2;

	cout <<"Middle row : \n";
		for (short j = 0; j < Cols; j++)
			printf("%02d	", Matrix[MiddleRow][j]);
}
void MatrixPrintMiddleCol(const int Matrix[3][3],const short&  Rows, const short&  Cols)
{
	short MiddleCol = Cols / 2;

	cout << "Middle col : \n";
	for (short i = 0; i < Rows; i++)
		printf("%02d\n", Matrix[i][MiddleCol]);
}

int main()
{
	srand((unsigned)time(NULL));

	int maRandomNumbers[3][3];

	MatrixFillWithRandomNumbers(maRandomNumbers, 3, 3);
	MatrixPrint(maRandomNumbers, 3, 3, "Matrix elements : ");
	cout << endl << endl;

	MatrixPrintMiddleRow(maRandomNumbers, 3, 3);
	cout << endl << endl;

	MatrixPrintMiddleCol(maRandomNumbers, 3, 3);
	cout << endl << endl;
}