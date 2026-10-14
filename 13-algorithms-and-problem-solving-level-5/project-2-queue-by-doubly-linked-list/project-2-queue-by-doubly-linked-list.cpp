#include <iostream>
#include "clQueue.h"
using namespace std;

int main()
{
    clQueue <int>Queue;

    Queue.Push(10);
    Queue.Push(20);
    Queue.Push(30);
    Queue.Push(40);
    Queue.Push(50);

    cout << "Queue Elements : ";
    Queue.Print();

    cout << "\n\nSize: " << Queue.Size();
    cout << "\nFront: " << Queue.Front();
    cout << "\nBack: " << Queue.Back();

    Queue.Pop();
    cout << "\n\n\nQueue Elements : ";
    Queue.Print();

    cout << "\n\nElement[2] : " << Queue.GetElement(2);

    Queue.Reverse();
    cout << "\n\n\nQueue elements after reverse : ";
    Queue.Print();

    Queue.UpdateElement(2, 600);
    cout << "\n\nQueue after updating Element[2] to 600 : ";
    Queue.Print();

    Queue.InsertAtBeginning(1000);
    cout << "\n\nQueue elements after inserting 1000 at front : ";
    Queue.Print();

    Queue.Clear();
    cout << "\n\nQueue elements after clear : ";
    Queue.Print();

}