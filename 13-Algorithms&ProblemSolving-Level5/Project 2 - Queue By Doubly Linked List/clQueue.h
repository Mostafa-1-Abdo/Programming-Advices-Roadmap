#pragma once
#include <iostream>
#include "clDoublyLinkedList.h"
using namespace std;

template <typename T>
class clQueue
{
private:
	clDoublyLinkedList <T> _DoublyLinkedList;
	T _back = NULL;
	
public:
	short Size()
	{
		return _DoublyLinkedList.Size();
	}
	bool IsEmpty()
	{
		_DoublyLinkedList.IsEmpty();
	}

	void InsertAtBeginning(const T value)
	{
		_DoublyLinkedList.InsertAtBeginning(value);
	}
	void Push(const T value)
	{
		_DoublyLinkedList.InsertAtEnd(value);

		_back = value;
	}

	void Clear()
	{
		_DoublyLinkedList.Clear();
	}

	void Pop()
	{
		_DoublyLinkedList.DeleteFirstNode();
	}

	T Front()
	{
		return _DoublyLinkedList.GetElemet(0);
	}
	T GetElement(const short Index)
	{
		return _DoublyLinkedList.GetElemet(Index);
	}
	T Back()
	{
		return _back;
	}

	void UpdateElement(const short Index,T new_value)
	{
		_DoublyLinkedList.UpdateElement(Index, new_value);
	}

	void Reverse()
	{
		_DoublyLinkedList.Reverse();
	}

	void Print()
	{
		_DoublyLinkedList.Print();
	}
};