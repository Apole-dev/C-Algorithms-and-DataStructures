//
// Created by Eren on 8/26/2024.
//
#ifndef HASHMAP_H
#define HASHMAP_H
#define HASHMAP_SIZE 26

typedef struct {
    int key;
    int frequency;
}HashMap;

extern HashMap* hashMap[HASHMAP_SIZE];
HashMap* CreateHashMap();
void InsertElement(int value);
void WriteFrequency();
#endif //HASHMAP_H
