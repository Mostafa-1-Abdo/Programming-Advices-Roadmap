#pragma once
#include <iostream>
#include "clDynamicArray.h"
using namespace std;

template <typename T>
class clStack
{
private:
	clDynamicArray <T> _DynamicArray;
	T _top = NULL;

public:
	short Size()
	{
		return _DynamicArray.Size();
	}
	bool IsEmpty()
	{
		_DynamicArray.IsEmpty();
	}

	void InsertAtEnd(const T value)
	{
		_DynamicArray.InsertAtEnd(value);
	}
	void Push(const T value)
	{
		_DynamicArray.InsertAtBeginning(value);

		_top = value;
	}

	void Clear()
	{
		_DynamicArray.Clear();
	}

	void Pop()
	{
		_DynamicArray.DeleteFirstElement();
	}

	T Top()
	{
		return _top;
	}
	T GetElement(const short Index)
	{
		return _DynamicArray.GetElement(Index);
	}
	T Bottom()
	{
		return _DynamicArray.GetElement(Size()-1);
	}

	void UpdateElement(const short Index, T new_value)
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