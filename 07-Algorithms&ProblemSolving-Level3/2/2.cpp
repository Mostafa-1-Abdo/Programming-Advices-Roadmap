#include <iostream>
#include <iomanip>
using namespace std;

int GetRandomNumber(const int& From, const int& To)
{
	return rand() % (To - From + 1);
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

int MatrixRowSum(const int Matrix[3][3],const short &Row,const short &Cols)
{
	int Sum = 0;

	for (short j = 0; j < Cols; j++)
	{
		Sum += Matrix[Row][j];
	}

	return Sum;
}
void MatrixPrintSumEachRow(const int Matrix[3][3],const short &Rows,const short &Cols)
{
	for (short i = 0; i < Rows; i++)
		cout << "Row " << i + 1 << " sum = " << MatrixRowSum(Matrix,i,Cols)<<"\n";
}

int main()
{
	srand((unsigned)time(NULL));

	int maRandomNumbers[3][3];

	MatrixFillWithRandomNumbers(maRandomNumbers, 3, 3);

	MatrixPrint(maRandomNumbers, 3, 3);
	cout << endl << endl;

	MatrixPrintSumEachRow(maRandomNumbers, 3, 3);
	cout << endl << endl;
}