#include "LinkedList.h"

LinkedList::LinkedList()
{
}

void LinkedList::AddNode(int data)
{
	Node* newNode = new Node(data);

	if (head == nullptr)
	{
		head = newNode;
		return;
	}

	Node* temp = head;
	while (temp->next != nullptr)
	{
		temp = temp->next;
	}

	temp->next = newNode;
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
		return;
	}

	int counter = 0;
	Node* temp = head;
	Node* previous = nullptr;
	
	while (counter < position)
	{
		if (temp->next == nullptr)
		{
			temp->next = newNode;
			return;
		}

		previous = temp;
		temp = temp->next;
		counter++;
	}
	
	newNode->next = temp;
	if (previous == nullptr)
	{
		head = newNode;
	}
	else
	{
		previous->next = newNode;
	}
}
