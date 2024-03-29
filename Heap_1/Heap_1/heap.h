#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>

typedef int HPDataType;

typedef struct Heap
{
	HPDataType* data;
	int size;
	int capacity;
}HP;

void HeapInit(HP* php);
void HeapDestroy(HP* php);

void HeapPush(HP* php, HPDataType x, bool cmp(const void*, const void*));
void HeapPop(HP* php, bool cmp(const void*, const void*));

int HeapSize(HP* php);
bool HeapEmpty(HP* php);
HPDataType HeapTop(HP* php);