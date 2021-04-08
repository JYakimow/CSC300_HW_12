#pragma once
#include <string>
#include "Node.hpp"

class BinaryTree
{
public:
	Node* root;
	BinaryTree(int number);
	void callInOrder(Node* root); //displays nodes in order
	Node* addNode(Node* root, int payload); //add node
};