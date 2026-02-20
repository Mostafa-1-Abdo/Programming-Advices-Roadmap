#include <iostream>
using namespace std;

class clNode
{
public:
	int value;
	clNode* prev;
	clNode* next;
};

clNode* Find(clNode* head, const int value)
{
	while (head != NULL)
	{
		if (head->value == value)
			return head;

		head = head->next;
	}
	return NULL;
}

void InsertAtBeginning(clNode*& head, const int value)
{
	clNode* new_node = new clNode(value, NULL, head);

	if (head != NULL)
		head->prev = new_node;

	head = new_node;
}
void InsertAfter(clNode*& node, const int value)
{
	clNode* new_node = new clNode(value, node, node->next);

	if (node->next != NULL)
		node->next->prev = new_node;

	node->next = new_node;
}
void InsertAtEnd(clNode*& head, const int value)
{
	clNode* new_node = new clNode(value,NULL,NULL);

	if (head == NULL)
	{
		head = new_node;
		return;
	}

	clNode* last_node = head;
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	last_node->next = new_node;
	new_node->prev = last_node;
}

void DeleteFirst(clNode*& head)
{
	if (head == NULL)
	{
		return;
	}

	clNode* node = head;
	head = head->next;

	if (head != NULL)
	{
		head->prev = NULL;
	}

	delete node;
}
void Delete(clNode*& head, const int value)
{
	clNode* node = Find(head, value);

	if (head == NULL || node == NULL)
	{
		return;
	}

	if (head == node)
	{
		head = node->next;
	}
	else
	{
		node->prev->next = node->next;
	}

	if(node->next != NULL)
	{
		node->next->prev = node->prev;
	}

	delete node;

}
void DeleteLast(clNode*& head)
{
	if(head == NULL)
	{
		return;
	}

	if (head->next == NULL)
	{
		delete head;
		head = NULL;
		return;
	}

	clNode* last_node = head;
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	last_node->prev->next = NULL;

	delete last_node;
}

void PrintNodesDetails(clNode* head)
{
	cout << "NULL <--> " << head->value << " <--> " << head->next->value << "\n";
	head = head->next;
	while (head->next != NULL)
	{
		cout << head->prev->value << " <--> " << head->value << " <--> " << head->next->value << "\n";
		head = head->next;
	}
	cout << head->prev->value << " <--> " << head->value << " <--> NULL\n";

}
void PrintListDetails(clNode* head)
{
	cout << "NULL";
	while (head != NULL)
	{
		cout << " <--> " << head->value;
		head = head->next;
	}
	cout << " <--> NULL\n";
}
void PrintListData(clNode* head)
{
	while (head != NULL)
	{
		cout << head->value << " ";
		head = head->next;
	}
}

int main()
{
	clNode* head = NULL;
	clNode* node1 = new clNode(1);
	clNode* node2 = new clNode(2);
	clNode* node3 = new clNode(3);

	head = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	node1->prev = NULL;
	node2->prev = node1;
	node3->prev = node2;

	InsertAtEnd(head, 4);
	InsertAtEnd(head, 5);


	PrintListDetails(head);
	
	DeleteLast(head);
	DeleteLast(head);
	DeleteLast(head);
	DeleteLast(head);
	DeleteLast(head);
	DeleteLast(head);

	PrintListDetails(head);


}