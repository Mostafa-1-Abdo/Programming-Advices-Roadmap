#include <iostream>
#include "clDynamicArray.h"
using namespace std;

int main()
{
	clDynamicArray <int> DynamicArray(5);

	DynamicArray.SetElement(0, 10);
	DynamicArray.SetElement(1, 20);
	DynamicArray.SetElement(2, 30);
	DynamicArray.SetElement(3, 40);
	DynamicArray.SetElement(4, 50);

	DynamicArray.Print();


	DynamicArray.InsertAt(5, -80);
	DynamicArray.Print();
}