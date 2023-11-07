#include "Node.h"

Node::Node()
{
	data = 0;
	next = nullptr;
	this->prev = nullptr;
}

Node::Node(int data)
{
	this->data = data;
	this->next = nullptr;
	prev = nullptr;
}
