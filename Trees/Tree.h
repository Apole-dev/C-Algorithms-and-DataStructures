//
// Created by Eren on 10/24/2024.
//

#ifndef ALGORITHM_TREE_H
#define ALGORITHM_TREE_H

#include <stdbool.h>

typedef struct {
    int data;
    struct Node* leftSide;
    struct Node* rightSide;
}Node;

Node* CreateNodeTree(int value);
Node* AddElementToLeftNode(Node* newNode , int value);
Node* AddElementToRightNode(Node* newNode, int value );
void InOrderedTraversal(Node* rootNode);
void PreOrderedTraversal(Node* rootNode);













#endif //ALGORITHM_TREE_H
