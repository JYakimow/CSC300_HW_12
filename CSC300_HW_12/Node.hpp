#pragma once
#include <string>

class Node
{
	public:
		Node(int payload);
		Node* leftChild;
		int payload;
		Node* rightChild;
		void setLeftChild(Node* N);
		void setRightChild(Node* N);
		int getPayload();
};