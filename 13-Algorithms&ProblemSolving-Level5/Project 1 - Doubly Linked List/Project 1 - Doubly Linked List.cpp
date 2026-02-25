#include <iostream>
#include "clDoublyLinkedList.h"
using namespace std;

int main()
{
	clDoublyLinkedList <int>DoublyLinkedList;
	DoublyLinkedList.InsertAtBeginning(5);
	DoublyLinkedList.InsertAtBeginning(4);
	DoublyLinkedList.InsertAtBeginning(3);
	DoublyLinkedList.InsertAtBeginning(2);
	DoublyLinkedList.InsertAtBeginning(1);

	DoublyLinkedList.Print();
	DoublyLinkedList.Reverse();
	DoublyLinkedList.Print();

}