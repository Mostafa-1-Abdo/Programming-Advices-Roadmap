#include <iostream>
using namespace std;

class clNode
{
public:
	int value;
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
	clNode* new_node = new clNode(value, head);
	head = new_node;
}
void InsertAfter(clNode*& node, const int value)
{
	if (node == NULL)
	{
		cout << "The given previous nod cannot be NULL\n";
		return;
	}

	clNode* new_node = new clNode(value, node->next);
	node->next = new_node;
}
void InsertAtEnd(clNode*& head, const int value)
{
	clNode* new_node = new clNode(value, NULL);

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
}

void DeleteFirst(clNode*& head)
{
	if (head == NULL)
		return;

	clNode* current_node = head;
	head = head->next;
	delete current_node;
}
void Delete(clNode*& head, const int value)
{
	if (head == NULL)
		return;

	clNode* current_node = head;
	if (head->value == value)
	{
		head = head->next;
	}
	else
	{
		clNode* prev_node = head;
		while (current_node != NULL && current_node->value == value)
		{
			prev_node = current_node;
			current_node = current_node->next;
		}

		if (current_node == NULL)
			return;

		prev_node->next = current_node->next;
	}
	delete current_node;
}
void DeleteLast(clNode*& head)
{
	if (head == NULL)
		return;

	if (head->next == NULL)
	{
		delete head;
		head = NULL;
		return;
	}

	clNode* current_node = head;
	clNode* prev_node = head;
	while (current_node->next != NULL)
	{
		prev_node = current_node;
		current_node = current_node->next;
	}
	prev_node->next = current_node->next;
	delete current_node;
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

	PrintListData(head);
}