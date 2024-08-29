//
// Created by Eren on 8/22/2024.
// Note: This is an implementation of a linked list.
// Warning: Some of the implementation is not efficient and not tested.
// I did not chechk the "nodes" is it possible to use or not so in spesific cases it would not work.
// Use it at your own risk.
//

#include <stdio.h>
#include <stdlib.h>


#pragma region Node Base
struct Node
{
    int data;
    struct Node *next;
};

/**
 * Creates a new node with the given value.
 *
 * @param value The value of the new node.
 *
 * @return The new node.
 */
struct Node* CreateNode(int value) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}
#pragma endregion

#pragma region First Element Manipulation

/**
 * Assigns a new node with the given value as the first element of the linked list.
 *
 * @param headNode The head of the linked list.
 * @param value The value of the new node to be assigned as the first element.
 *
 * @return The head of the updated linked list.
 */
struct Node* AssignFirstElement(struct Node* headNode, int value) {
    struct Node* newNode = CreateNode(value);
    newNode->next = headNode;  // headNode'u yeni node'un next'ine atıyoruz
    return newNode;  // Yeni head, yeni oluşturulan node olmalı
}

/**
 * Deletes the first element of the linked list.
 *
 * @param headNode The head of the linked list.
 *
 * @return The head of the updated linked list.
 */
struct Node* DeleteFirstElement(struct Node* headNode) {
    struct Node* temp = headNode;
    headNode = headNode->next;
    free(temp);
    return headNode;
}
#pragma endregion

#pragma region Last Element Manipulation

/**
 * Deletes the last element of a singly linked list.
 *
 * @param headNode The head of the linked list.
 *
 * @return The head of the modified linked list.
 *
 * @throws None
 */
struct Node* DeleteLastElement(struct Node* headNode) {
    if (headNode == NULL) return NULL;
    if (headNode->next == NULL) {
        free(headNode);
        return NULL;
    }

    struct Node* temp = headNode;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;

    return headNode;
}
/**
 * Adds a new node with the given value to the end of the linked list.
 *
 * @param headNode The head of the linked list.
 * @param value The value of the new node to be added.
 *
 * @return The head of the updated linked list.
 *
 * @throws None
 */
struct Node* AddLastElement(struct Node* headNode, int value) {
    struct Node* newNode = CreateNode(value);

    if (headNode == NULL) {
        return newNode;
    }

    struct Node* temp = headNode;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    return headNode;
}


/**
 * Changes the data of the last element of a linked list.
 *
 * @param headNode The head of the linked list.
 * @param value The new data to be assigned to the last element.
 *
 * @return The head of the modified linked list.
 *
 * @throws None
 */
struct Node* ChangeLastElement(struct Node* headNode, int value) {
    if (headNode == NULL) return NULL;

    struct Node* temp = headNode;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->data = value;  // Son elemanın data'sı değiştirildi
    return headNode;
}


#pragma endregion

#pragma region Utility Functions

/**
 * Converts an array to a linked list.
 *
 * @param arr The array to be converted.
 * @param size The size of the array.
 *
 * @return The head of the linked list.
 */
struct Node* Array2LinkedList(int *arr, int size) {
    struct Node* head = CreateNode(arr[0]);
    struct Node* temp = head;

    for (int i = 1; i < size; ++i) {
        temp->next = CreateNode(arr[i]);
        temp = temp->next;
    }
    return head;
}

/**
 * Calculates the length of a linked list.
 *
 * @param headNode The head of the linked list.
 *
 * @return The number of nodes in the linked list.
 */
int LengthOfLinkedList(struct Node* headNode) {
    int count = 0;
    struct Node* temp = headNode;
    while (temp->next != NULL) {
        count++;
        temp = temp->next;
    }

    return count+1;
}

/**
 * Changes the data of a node at a specified index in a linked list.
 *
 * @param headNode The head of the linked list.
 * @param index The index of the node to be changed.
 * @param value The new data to be assigned to the node.
 *
 * @return The head of the modified linked list.
 */
struct Node* ChangeElementByIndex(struct Node* headNode, int index, int value) {
    struct Node* temp = headNode;
    for (int i = 0; i < index; ++i) {
        temp = temp->next;
        temp->data = value;
    }

    return headNode;
}

/**
 * Finds the index of a given value in a linked list.
 *
 * @param headNode The head of the linked list.
 * @param value The value to search for.
 *
 * @return The index of the value in the linked list, or -1 if not found.
 */
int FindIndex(struct Node* headNode, int value) {
    struct Node* temp = headNode;
    int index = 0;
    while (temp != NULL) {
        if (temp->data == value) return index;
        temp = temp->next;
        index++;
    }
    return -1;
}

/**
 * Prints the elements of a linked list.
 *
 * @param headNode The head of the linked list to be printed.
 *
 * @return None
 */
void PrintLinkedList(struct Node* headNode) {
    struct Node* temp = headNode;
    while (temp->next != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d ", temp->data); //print last element
}

/**
 * Deletes an element from a linked list at the specified index.
 *
 * @param headNode The head of the linked list.
 * @param index The index of the element to be deleted.
 *
 * @return The head of the modified linked list.
 *
 * @throws None
 */
struct Node* DeleteElementByIndex(struct Node* headNode, int index) {
    struct Node* temp = headNode;
    for (int i = 1; i < index; ++i) {
        if(temp->next == NULL) return headNode;
        temp = temp->next;
    }

    if(temp->next->next != NULL) temp->next = temp->next->next;
    free(temp->next);
    temp->next = NULL;

    return headNode;
}

/**
 * Inserts a new element at a specified index in a linked list.
 *
 * @param headNode The head of the linked list.
 * @param index The index at which the new element is to be inserted.
 * @param value The value of the new element to be inserted.
 *
 * @return The head of the modified linked list.
 *
 * @throws None
 */
struct Node* InsertElementAtIndex(struct Node *headNode, int index, int value) {
    struct Node* newNode = CreateNode(value);

    if (index == 0) {
        newNode->next = headNode;
        return newNode;
    }

    struct Node* temp = headNode;
    for (int i = 0; i < index - 1 && temp != NULL; ++i) {
        temp = temp->next;
    }

    if (temp == NULL) return headNode;
    newNode->next = temp->next;
    temp->next = newNode;

    return headNode;
}

/**
 * Searches for an element with a given value in a linked list.
 *
 * @param headNode The head of the linked list.
 * @param value The value to search for.
 *
 * @return 1 if the value is found, -1 otherwise.
 *
 * @throws None
 */
int FindElement(struct Node* headNode, int value) {
    struct Node* temp = headNode;
    while (temp->next != NULL) {
        if (temp->data == value)return 1;
        temp = temp->next;
    }
    return -1;
}

/**
 * Frees the memory allocated for a linked list.
 *
 * @param headNode The head of the linked list to be freed.
 *
 * @return None
 *
 * @throws None
 */
void FreeLinkedList(struct Node* headNode) {
    struct Node* temp = headNode;
    while (headNode->next != NULL) {
        temp = headNode;
        headNode = headNode->next;
        free(temp);
    }
}

/**
 * Retrieves the data of a node at a specified index in a linked list.
 *
 * @param headNode The head of the linked list.
 * @param index The index of the node to retrieve data from.
 *
 * @return The data of the node at the specified index.
 *
 * @throws None
 */
int GetElementByIndex(struct Node* headNode, int index) {
    struct Node* temp = headNode;
    for (int i = 1; i < index; ++i) {
        temp = temp->next;
    }
    int value = temp->data;
    return value;
}
#pragma endregion
