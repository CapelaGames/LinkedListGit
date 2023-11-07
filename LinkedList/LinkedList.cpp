#include "LinkedList.h"

LinkedList::LinkedList()
{
	head = nullptr;
	tail = nullptr;
}

void LinkedList::AddNode(int data)
{
	Node* newNode = new Node(data);

	if (head == nullptr)
	{
		head = newNode;
		tail = newNode;
		return;
	}

	Node* temp = tail;

	newNode->prev = temp;
	temp->next = newNode;
	
	tail = newNode;
}

void LinkedList::PrintList()
{
	Node* temp = head;

	if (temp == nullptr)
	{
		cout << "List empty" << endl;
		return;
	}

	while (temp != nullptr)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
}


void LinkedList::PrintListBackwards()
{
	Node* temp = tail;

	if (temp == nullptr)
	{
		cout << "List empty" << endl;
		return;
	}

	while (temp != nullptr)
	{
		cout << temp->data << " ";
		temp = temp->prev;
	}
}

void LinkedList::DeleteNode(int position)
{
	//HOMEWORK


	Node* newNode = new Node(340943);

	//Keyword to remove something from memory
	delete newNode;
}

void LinkedList::InsertNode(int position, int data)
{
	Node* newNode = new Node(data);

	if (head == nullptr)
	{
		head = newNode;
		tail = newNode;
		return;
	}
	if (position == 0)
	{
		newNode->next = head;
		head->prev = newNode;
		head = newNode;
	}

	int counter = 0;
	Node* temp = head;

	while (counter < position)
	{
		if (temp->next == nullptr)
		{
			newNode->prev = temp;
			temp->next = newNode;
			tail = newNode;
			return;
		}

		temp = temp->next;
		counter++;
	}

	temp = temp->prev;

	newNode->next = temp->next;
	newNode->prev = temp;
	temp->next = newNode;
	newNode->next->prev = newNode;

	

	/*if (temp->prev == nullptr)
	{
		head = newNode;
	}
	else
	{
		previous->next = newNode;
	}*/
}
