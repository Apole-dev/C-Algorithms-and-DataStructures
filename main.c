#include <stdio.h>

#include "Heaps/Heap.h"
#include "Sorting Algorithms/Bubble Sort/BubbleSort.h"
#include "Sorting Algorithms/Insertion Sort/InsertionSort.h"
#include "Sorting Algorithms/Quick Sort/QuickSort.h"
#include "Sorting Algorithms/Selection Sort/SelectionSort.h"
#include "Trees/Tree.h"

int main(void) {
    int arr[] = {3  ,1 ,4 ,5 ,2,432,9,6,13};
    int n = sizeof(arr) / sizeof(arr[0]);

    Node* rootNode = CreateNodeTree(1);

    Node* leftNode1 =  AddElementToLeftNode(rootNode,3);
    Node* leftNode2 =  AddElementToLeftNode(leftNode1,8);

    Node* rightNode1 = AddElementToRightNode(rootNode,6);
    Node* rightNode1_2 = AddElementToRightNode(leftNode1,5);

    InOrderedTraversal(rootNode);



    return 0;
}
