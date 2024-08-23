//
// Created by Eren on 8/22/2024.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
struct Node {
    int data;
    struct Node* next;
};

// Fonksiyon prototipleri
struct Node* CreateNode(int value);
struct Node* Array2LinkedList(int *arr, int size);
int LengthOfLinkedList(struct Node* headNode);
struct Node* AssignFirstElement(struct Node* headNode, int value);
struct Node* DeleteFirstElement(struct Node* headNode) ;

struct Node* DeleteLastElement(struct Node* headNode);
struct Node* AddLastElement(struct Node* headNode, int value);
struct Node* ChangeLastElement(struct Node* headNode, int value);

struct Node* ChangeElementByIndex(struct Node* headNode, int index, int value);
int FindIndex(struct Node* headNode, int value);
void PrintLinkedList(struct Node* headNode);
struct Node* DeleteElementByIndex(struct Node* headNode, int index) ;
struct Node* InsertElementAtIndex(struct Node *headNode, int index, int value);
int FindElement(struct Node* headNode, int value);
void FreeLinkedList(struct Node* headNode);
int GetElementByIndex(struct Node* headNode, int index);
#endif //LINKEDLIST_H
