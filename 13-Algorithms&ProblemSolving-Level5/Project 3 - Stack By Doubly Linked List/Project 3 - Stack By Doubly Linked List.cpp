#include <iostream>
#include "clStack.h"
using namespace std;

int main()
{
    clStack <int> Stack;

    Stack.Push(10);
    Stack.Push(20);
    Stack.Push(30);
    Stack.Push(40);
    Stack.Push(50);


    cout << "Stack elements : ";
    Stack.Print();

    cout << "\n\nSize: " << Stack.Size();
    cout << "\nTop: " << Stack.Top();
    cout << "\nBottom: " << Stack.Bottom();

    Stack.Pop();
    cout << "\n\n\nStack elements : ";
    Stack.Print();

    cout << "\n\nElement[2] : " << Stack.GetElement(2);

    Stack.Reverse();
    cout << "\n\n\nStack elements after reverse : ";
    Stack.Print();

    Stack.UpdateElement(2, 600);
    cout << "\n\nStack elemetns after updating element[2] to 600 : ";
    Stack.Print();

    Stack.InsertAtEnd(2000);
    cout << "\n\nStack elements after inserting 2000 at bottom : ";
    Stack.Print();

    Stack.Clear();
    cout << "\n\nStack elements after clear : ";
    Stack.Print();
}