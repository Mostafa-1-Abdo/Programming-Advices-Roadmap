#include <iostream>
#include "clString.h"
using namespace std;

int main()
{
	clString String("Meesi");

	String.Value = "Mostafa";
	String.Value = "Mostafa Abdo";
	String.Value = "Mostafa Abdo is number 1";
	cout << String.Value;
	cout << endl << endl;

	String.Undo();
	cout << String.Value;
	cout << endl << endl;

	String.Redo();
	cout << String.Value;
	cout << endl << endl;

	String.Undo();
	cout << String.Value;
	cout << endl << endl;

}