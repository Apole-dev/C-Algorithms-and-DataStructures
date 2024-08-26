//
// Created by Eren on 8/26/2024.
//
#include <stdio.h>
#include <stdlib.h>
#define HASHMAP_SIZE 26

typedef struct {
    int key;
    int frequency;
}HashMap;

HashMap* hashMap[HASHMAP_SIZE] = {NULL};

HashMap* CreateHashMap() {
    HashMap* newHashMap =(HashMap*)malloc(sizeof(HashMap));
    return newHashMap;
}
// 3 3 1 4 5 2 1 3

void InsertElement(int value) {
    if (value >= 0 && value < HASHMAP_SIZE) {  // Dizinin sınırlarını kontrol et
        if (hashMap[value] != NULL) {
            hashMap[value]->frequency++;
        } else {
            HashMap* newHashMap = CreateHashMap();
            newHashMap->key = value;
            newHashMap->frequency = 1;
            hashMap[value] = newHashMap;
        }
    }
}

void WriteFrequency() {
    for (int i = 0; i < HASHMAP_SIZE; ++i) {
        if (hashMap[i] != NULL) {
            printf("Key: %d, Frequency: %d\n", hashMap[i]->key, hashMap[i]->frequency);
        } else {
            printf("Key: %d, Frequency: 0\n", i);
        }
    }
}
