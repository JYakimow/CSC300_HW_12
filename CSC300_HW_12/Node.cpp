#include "Node.hpp"
#include <stdlib.h>

Node::Node(int payload)
{
	this->payload = payload;
	this->leftChild = NULL;
	this->rightChild = NULL;
}

void Node::setRightChild(Node* N)
{
	this->rightChild = N;
}

void Node::setLeftChild(Node* N)
{
	this->leftChild = N;
}

int Node::getPayload()
{
	return this->payload;
}