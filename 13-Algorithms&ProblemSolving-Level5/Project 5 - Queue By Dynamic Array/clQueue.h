#pragma once
#include <iostream>
#include "clDynamicArray.h"
using namespace std;

template <typename T>
class clQueue
{
private:
	clDynamicArray <T> _DynamicArray;
	T _back = NULL;
	
public:
	short Size()
	{
		return _DynamicArray.Size();
	}
	bool IsEmpty()
	{
		_DynamicArray.IsEmpty();
	}

	void InsertAtBeginning(const T value)
	{
		_DynamicArray.InsertAtBeginning(value);
	}
	void Push(const T value)
	{
		_DynamicArray.InsertAtEnd(value);

		_back = value;
	}

	void Clear()
	{
		_DynamicArray.Clear();
	}

	void Pop()
	{
		_DynamicArray.DeleteFirstElement();
	}

	T Front()
	{
		return _DynamicArray.GetElement(0);
	}
	T GetElement(const short Index)
	{
		return _DynamicArray.GetElement(Index);
	}
	T Back()
	{
		return _back;
	}

	void UpdateElement(const short Index,T new_value)
	{
		_DynamicArray.SetElement(Index, new_value);
	}

	void Reverse()
	{
		_DynamicArray.Reverse();
	}

	void Print()
	{
		_DynamicArray.Print();
	}
};