#include <iostream>
#include <iomanip>
using namespace std;

void MatrixFillWithOrdersNumbers(int Matrix[3][3], const short& Rows, const short& Cols, short StartNumber = 1)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			Matrix[i][j] = StartNumber;
			StartNumber += 1;
		}
	}
}

void MatrixCopy(const int Matrix1[3][3], int Matrix2[3][3],const short &Rows, const short& Cols)
{
	for (short i = 0; i < Rows; i++)
		for (short j = 0; j < Cols; j++)
			Matrix2[i][j] = Matrix1[i][j];
}
void MatrixTranspose(int Matrix[3][3], const short& Rows, const short& Cols)
{
	int Temp[3][3];
	for (short i = 0; i < Rows; i++)
		for (short j = 0; j < Cols; j++)
			Temp[i][j] = Matrix[j][i];
	MatrixCopy(Temp, Matrix, 3, 3);

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

int main()
{
	int maOrderNumbers[3][3];

	MatrixFillWithOrdersNumbers(maOrderNumbers, 3, 3);
	MatrixPrint(maOrderNumbers, 3, 3);
	cout << endl << endl;

	cout << "After Transpose :-\n";
	MatrixTranspose(maOrderNumbers, 3, 3);
	MatrixPrint(maOrderNumbers, 3, 3);
	cout << endl << endl;
}