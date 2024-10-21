//
// Created by Eren on 9/5/2024.
//


#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode{
    int value;
    int level;
    short leafCunt;
    struct TreeNode* parent;
    struct TreeNode* left;
    struct TreeNode* right;
}TreeNode;

TreeNode* InitTreeNode(int value){
    TreeNode* rootNode = (TreeNode*)malloc(sizeof(TreeNode));
    rootNode->value = value;
    rootNode->leafCunt = 0;
    rootNode->left = rootNode;
    rootNode->right = rootNode;
    rootNode->parent = NULL;
    return rootNode;
}


TreeNode* FindElement(TreeNode* rootNode, int value) {
    if(rootNode == NULL) return (TreeNode *) -1;

    if(rootNode->value == value) return rootNode;
    if(rootNode->left != NULL) FindElement(rootNode->left, value);
    if (rootNode->right != NULL) FindElement(rootNode->right,value);

};
bool InsertElement( TreeNode* rootNode, int value) {
    if(rootNode == NULL) return false;


    if(FindElement(rootNode,value)) {
        printf("This element do not exists\n");
        return false;
    }

    TreeNode* newNode = InitTreeNode(value);
    if(rootNode->left != NULL) {
        newNode->parent = rootNode;
        rootNode->left->right;
    }
};
bool DeleteElement(TreeNode* rootNode, int value);