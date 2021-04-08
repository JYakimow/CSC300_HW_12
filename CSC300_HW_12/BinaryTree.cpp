#include "BinaryTree.hpp"
#include <stdlib.h>
#include <iostream>
using namespace std;

BinaryTree::BinaryTree(int numumber)
{
    this->root = new Node(numumber);
}

Node* BinaryTree::addNode(Node* root, int payload)
{
    if (root == NULL)
    {
        return new Node(payload);
    }

    if (payload <= root->getPayload())
    {
        root->leftChild = addNode(root->leftChild, payload);
    }
    else
    {
        root->rightChild = addNode(root->rightChild, payload);
    }
    return root;
}

void BinaryTree::callInOrder(Node* root)
{
    if (root != NULL)
    {
        callInOrder(root->leftChild);
        cout << root->getPayload() << endl;
        callInOrder(root->rightChild);
    }
}