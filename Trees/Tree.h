//
// Created by Eren on 9/5/2024.
//

#ifndef TREE_H
#define TREE_H

#include <stdbool.h>

// TreeNode yapısının tam tanımı burada yapılmalıdır
typedef struct TreeNode {
    int value;
    int leafCount; // Bu doğru isim olabilir
    struct TreeNode* left;
    struct TreeNode* right;
    struct TreeNode* parent;
} TreeNode;

// Fonksiyon prototipleri
TreeNode* InitTreeNode(int value);
TreeNode* FindElement(TreeNode* rootNode, int value);
bool InsertElement(TreeNode* rootNode, int value);
bool DeleteElement(TreeNode* rootNode, int value);

#endif // TREE_H
