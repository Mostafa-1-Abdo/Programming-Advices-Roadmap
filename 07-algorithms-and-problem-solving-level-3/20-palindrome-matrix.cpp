#include <iostream>
using namespace std;

enum enPalindromeStatus { Palindrome = 1, NotPalindrome };

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

enPalindromeStatus MatrixCheckPalindromeStatus(const int Matrix[3][3], const short& Rows, const short& Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols/2; j++)
		{
			if (Matrix[i][j] != Matrix[i][Cols - 1 - j])
				return enPalindromeStatus::NotPalindrome;
		}
	}
	return enPalindromeStatus::Palindrome;
}
void PrintPalindromeResult(const int Matrix[3][3], const short& Rows, const short& Cols)
{
	cout << "Matrix is " << (MatrixCheckPalindromeStatus(Matrix, Rows, Cols) == enPalindromeStatus::Palindrome ? "palindrome" : "not palindrome");
}

int main()
{
	int maPalindrome[3][3] = { {10,20,10},{40,50,40},{70,80,70} };

	MatrixPrint(maPalindrome, 3, 3);
	cout << endl << endl;

	PrintPalindromeResult(maPalindrome, 3, 3);
	cout << endl << endl;
}