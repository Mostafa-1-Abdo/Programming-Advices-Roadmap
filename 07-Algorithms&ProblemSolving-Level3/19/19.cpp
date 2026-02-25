#include <iostream>
using namespace std;

enum enExtremum { Max = 1, Min };

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

int MatrixGetExtremum(const int Matrix[3][3], const short& Rows, const short& Cols,const enExtremum &Extremum)
{
	int ExtremumNumber = Matrix[0][0];
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Extremum == enExtremum::Max)
			{
				if (ExtremumNumber < Matrix[i][j])
					ExtremumNumber = Matrix[i][j];
			}
			else
				if (ExtremumNumber > Matrix[i][j])
					ExtremumNumber = Matrix[i][j];
		}
	}
	return ExtremumNumber;
}
void PrintExtremumNumbers(const int Matrix[3][3], const short& Rows, const short& Cols)
{
	cout << "Min number is : " << MatrixGetExtremum(Matrix,Rows,Cols, enExtremum::Min) << "\n";
	cout << "Max number is : " << MatrixGetExtremum(Matrix, Rows, Cols, enExtremum::Max) << "\n";
}

int main()
{
	int maNumbers[3][3] = { {10,20,30},{40,50,60},{70,80,90} };

	MatrixPrint(maNumbers, 3, 3);
	cout << endl << endl;

	PrintExtremumNumbers(maNumbers, 3, 3);
	cout << endl << endl;
}