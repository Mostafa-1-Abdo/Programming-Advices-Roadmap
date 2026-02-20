#pragma once
#include <iostream>
using namespace std;

template <typename T>
class clDynamicArray
{
private:
	T* _array;
	int _size;

	void _Swap(T& Variable1, T& Variable2)
	{
		T Temp = Variable1;
		Variable1 = Variable2;
		Variable2 = Temp;
	}

	int _Find(const T value)
	{
		for (int i = 0; i < _size; i++)
		{
			if (_array[i] == value)
				return i;
		}
		return -1;
	}

public:
	clDynamicArray(const int size = 0)
	{
		if (size < 0)
			_size = 0;

		else
			_size = size;

		_array = new T[_size];
	}

	int Size()
	{
		return _size;
	}
	void Resize(int new_size)
	{
		if (new_size < 0)
			new_size = 0;

		T* temp_array = new T[new_size];

		if (_size > new_size)
			_size = new_size;

		for (int i = 0; i < _size; i++)
		{
			temp_array[i] = _array[i];
		}
		_size = new_size;
		delete[] _array;
		_array = temp_array;
	}
	
	bool IsValueExist(const T value)
	{
		return _Find(value) != -1;
	}
	bool IsEmpty()
	{
		return _size == 0;
	}

	void SetElement(const int Index,const T value)
	{
		if (Index < 0 || Index > _size - 1)
			return;

		_array[Index] = value;
	}

	T GetElement(const int Index)
	{
		if (Index < 0 || Index > _size - 1)
			return NULL;

		return _array[Index];
	}

	void InsertAtBeginning(const T value)
	{
		InsertAt(0, value);
	}
	void InsertAt(const int Index, const T value)
	{
		if (Index < 0 || Index > _size )
			return;

		_size++;
		T* temp_array = new T[_size];

		for (int i = 0; i < Index; i++)
			temp_array[i] = _array[i];

		temp_array[Index] = value;

		for (int i = Index + 1 ; i < _size;i++)
		{
			temp_array[i] = _array[i - 1];
		}
		
		delete[] _array;
		_array = temp_array;
	}
	void InsertAtEnd(const T value)
	{
		InsertAt(_size, value);
	}

	void DeleteFirstElement()
	{
		DeleteElementAt(0);
	}
	void DeleteElementAt(const int Index)
	{
		if (Index < 0 || Index > _size - 1)
			return;

		_size--;
		T* temp_array = new T[_size];

		for (int i = 0; i < Index; i++)
			temp_array[i] = _array[i];

		for (int i = Index; i < _size; i++)
		{
			temp_array[i] = _array[i + 1];
		}

		delete[] _array;
		_array = temp_array;
	}
	void DeleteElement(const T value)
	{
		DeleteElementAt(_Find(value));
	}
	void DeleteLastElement()
	{
		DeleteElementAt(_size-1);
	}

	void Clear()
	{
		_size = 0;
		delete[] _array;
		_array = new T[0];	
	}

	void Reverse()
	{
		int half_size = _size / 2;
		for (int i = 0; i < half_size; i++)
		{
			_Swap(_array[i], _array[_size - 1 - i]);
		}
	}

	void Print()
	{
		for (int i = 0; i < _size; i++)
			cout << _array[i] << " ";

		cout << "\n";
	}

	~clDynamicArray()
	{
			delete[] _array;
	}
};