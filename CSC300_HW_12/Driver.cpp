#include <iostream>
#include <stdlib.h>
#include "BinaryTree.hpp"
#include "Node.hpp"
using namespace std;

int main(int argc, char** argv)
{
    cout << "Hello World!" << endl;

    BinaryTree* binary_tree = new BinaryTree(15);
    binary_tree->addNode(binary_tree->root, 5);
    binary_tree->addNode(binary_tree->root, 1);
    binary_tree->addNode(binary_tree->root, 7);
    binary_tree->addNode(binary_tree->root, 0);
    binary_tree->callInOrder(binary_tree->root);
}