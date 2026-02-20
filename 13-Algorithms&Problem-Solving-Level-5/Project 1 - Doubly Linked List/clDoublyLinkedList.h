#pragma once
#include <iostream>
using namespace std;

template <typename T>
class clDoublyLinkedList
{
private:
	struct stNode
	{
		T value;
		stNode* prev;
		stNode* next;
	};

	stNode* _head = NULL;
	short _size = 0;

	stNode* _FindByValue(const T value)
	{
		stNode* temp_head = _head;

		while (temp_head != NULL)
		{
			if (temp_head->value == value)
				return temp_head;

			temp_head = temp_head->next;
		}
		return NULL;
	}
	stNode* _FindByIndex(short Index)
	{
		stNode* temp_head = _head;

		if (Index < 0 || Index > _size - 1)
			return NULL;

		while (temp_head != NULL)
		{
			if (Index == 0)
				return temp_head;

			temp_head = temp_head->next;
			Index--;
		}
	}

public:
	short Size()
	{
		return _size;
	}
	bool IsEmpty()
	{
		return _size == 0;
	}

	bool IsNodeExistByValue(const T value)
	{
		return _FindByValue(value) != NULL;
	}
	bool IsNodeExistByIndex(const short Index)
	{
		return _FindByIndex(Index) != NULL;
	}

	void InsertAtBeginning(const T value)
	{
		stNode* new_node = new stNode(value, NULL, _head);

		if (_head != NULL)
			_head->prev = new_node;

		_head = new_node;

		_size++;
	}
	void InsertAfterByValue(const T node_value, const T value)
	{
		stNode* node = _FindByValue(node_value);
		if (node == NULL)
			return;

		stNode* new_node = new stNode(value, node, node->next);

		if (node->next != NULL)
			node->next->prev = new_node;

		node->next = new_node;

		_size++;
	}
	void InsertAfterByIndex(const short node_index, const T value)
	{
		stNode* node = _FindByIndex(node_index);
		if (node == NULL)
			return;

		stNode* new_node = new stNode(value, node, node->next);

		if (node->next != NULL)
			node->next->prev = new_node;

		node->next = new_node;

		_size++;
	}
	void InsertAtEnd(const T value)
	{
		stNode* new_node = new stNode(value, NULL, NULL);

		if (_head == NULL)
		{
			_head = new_node;
		}

		else
		{
			stNode* last_node = _head;
			while (last_node->next != NULL)
			{
				last_node = last_node->next;
			}
			last_node->next = new_node;
			new_node->prev = last_node;
		}

		_size++;
	}

	void Clear()
	{
		stNode* current_node = _head;
		while (_head != NULL)
		{
			_head = _head->next;
			delete current_node;
			current_node = _head;
		}

		_size = 0;
	}

	void DeleteFirstNode()
	{
		if (_head == NULL)
		{
			return;
		}

		stNode* node = _head;
		_head = _head->next;

		if (_head != NULL)
		{
			_head->prev = NULL;
		}

		delete node;

		_size--;
	}
	void DeleteNode(const T value)
	{
		stNode* node = _FindByValue(value);

		if (_head == NULL || node == NULL)
		{
			return;
		}

		if (_head == node)
		{
			_head = node->next;
		}
		else
		{
			node->prev->next = node->next;
		}

		if (node->next != NULL)
		{
			node->next->prev = node->prev;
		}

		delete node;

		_size--;
	}
	void DeleteLastNode()
	{
		if (_head == NULL)
		{
			return;
		}

		if (_head->next == NULL)
		{
			delete _head;
			_head = NULL;
		}
		else
		{
			stNode* last_node = _head;
			while (last_node->next != NULL)
			{
				last_node = last_node->next;
			}
			last_node->prev->next = NULL;

			delete last_node;
		}

		_size--;
	}

	T GetElemet(const short Index)
	{
		stNode* node = _FindByIndex(Index);

		if (node == NULL)
			return NULL;
		return node->value;
	}

	void UpdateElement(const short Index, const T new_value)
	{
		stNode* node = _FindByIndex(Index);
		if (node == NULL)
			return;

		node->value = new_value;
	}

	void Reverse()
	{
		stNode* temp_head = _head;
		stNode* temp_pointer = NULL;

		while (temp_head != NULL)
		{
			temp_pointer = temp_head->prev;
			temp_head->prev = temp_head->next;
			temp_head->next = temp_pointer;
			temp_head = temp_head->prev;
		}

		if (temp_pointer != NULL)
			_head = temp_pointer->prev;
	}

	void PrintNodesDetails()
	{
		stNode* temp_head = _head;

		cout << "NULL <--> " << temp_head->value << " <--> " << temp_head->next->value << "\n";
		temp_head = temp_head->next;
		while (temp_head->next != NULL)
		{
			cout << temp_head->prev->value << " <--> " << temp_head->value << " <--> " << temp_head->next->value << "\n";
			temp_head = temp_head->next;
		}
		cout << temp_head->prev->value << " <--> " << temp_head->value << " <--> NULL\n";
	}
	void PrintListDetails()
	{
		stNode* temp_head = _head;

		cout << "NULL";
		while (temp_head != NULL)
		{
			cout << " <--> " << temp_head->value;
			temp_head = temp_head->next;
		}
		cout << " <--> NULL\n";
	}
	void Print()
	{
		stNode* temp_head = _head;

		while (temp_head != NULL)
		{
			cout << temp_head->value << " ";
			temp_head = temp_head->next;
		}
		cout << "\n";
	}
};
