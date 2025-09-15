#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <assert.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *next;
} Node;

Node *BuildOneTwoThree();
int Length(Node *);
int Count(Node *, int);
int getNth(Node *, unsigned int);
void deleteList(Node **);
void Push(Node **, int);
int Pop(Node **);

#endif // LINKEDLIST_H
