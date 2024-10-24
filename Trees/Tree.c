//
// Created by Eren on 10/24/2024.
//

#include "Tree.h"


#include <malloc.h>
#include <stdbool.h>
#include <stdio.h>


Node* CreateNodeTree(int element){
    Node* newNode = malloc(sizeof(Node));
    newNode->data = element;
    newNode->leftSide = NULL;
    newNode->rightSide = NULL;
    return newNode;
}

Node* AddElementToLeftNode(Node* newNode , int value){
    if(newNode->leftSide == NULL) {
        Node* node =  CreateNodeTree(value);
        node->data = value;
        newNode->leftSide = (struct Node *) node;
        return node;
    }
    return NULL;
}

Node* AddElementToRightNode(Node* newNode, int value ){
    if(newNode->rightSide == NULL) {
        Node* node =  CreateNodeTree(value);
        node->data = value;
        newNode->rightSide = (struct Node *) node;
        return node;
    }
    return NULL;
}



void InOrderedTraversal(Node* rootNode){
    if(rootNode == NULL) {
        return;
    }
    InOrderedTraversal((Node *) rootNode->leftSide);
    printf("%d\n", rootNode->data);
    InOrderedTraversal((Node *) rootNode->rightSide);

}

void PreOrderedTraversal(Node* rootNode){
    if(rootNode == NULL ){
        printf("Node is empty" );
        return;
    }
    printf("%d", rootNode->data );
    PreOrderedTraversal((Node *) rootNode->leftSide);
    PreOrderedTraversal((Node *) rootNode->rightSide);
}