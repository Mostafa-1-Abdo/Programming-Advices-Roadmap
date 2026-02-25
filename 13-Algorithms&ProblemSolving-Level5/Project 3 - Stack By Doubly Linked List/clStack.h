#pragma once
#include <iostream>
#include "clDoublyLinkedList.h"
using namespace std;

template <typename T>
class clStack
{
private:
	clDoublyLinkedList <T> _DoublyLinkedList;
	T _top = NULL;

public:
	short Size()
	{
		return _DoublyLinkedList.Size();
	}
	bool IsEmpty()
	{
		_DoublyLinkedList.IsEmpty();
	}

	void InsertAtEnd(const T value)
	{
		_DoublyLinkedList.InsertAtEnd(value);
	}
	void Push(const T value)
	{
		_DoublyLinkedList.InsertAtBeginning(value);

		_top = value;
	}

	void Clear()
	{
		_DoublyLinkedList.Clear();
	}

	void Pop()
	{
		_DoublyLinkedList.DeleteFirstNode();
	}

	T Top()
	{
		return _top;
	}
	T GetElement(const short Index)
	{
		return _DoublyLinkedList.GetElemet(Index);
	}
	T Bottom()
	{
		return _DoublyLinkedList.GetElemet(Size()-1);
	}

	void UpdateElement(const short Index, T new_value)
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