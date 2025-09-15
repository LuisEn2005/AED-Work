#include "linkedList.h"

Node *BuildOneTwoThree() {
  Node *head = malloc(sizeof(Node));
  Node *second = malloc(sizeof(Node));
  Node *third = malloc(sizeof(Node));

  head->data = 1;
  head->next = second;
  second->data = 2;
  second->next = third;
  third->data = 3;
  third->next = NULL;

  return head;
}

int Length(Node *current) {
  int counter = 0;
  while (current) {
    counter++;
    current = current->next;
  }
  return counter;
}

int Count(Node *current, int lookFor) {
  int counter = 0;
  while (current) {
    if (current->data == lookFor) {
      counter++;
    }
    current = current->next;
  }
  return counter;
}

int getNth(Node *current, unsigned int index) {
  assert(index < Length(current));
  while (index) {
    current = current->next;
    index--;
  }
  return current->data;
}

void deleteList(Node **current) {
  assert(*current != NULL);
  Node *next = (*current)->next;
  while (*current) {
    free(*current);
    *current = next;
    if (next) {
      next = (*current)->next;
    }
  }
}

void Push(Node **current, int data) {
  Node *newNode = malloc(sizeof(Node *));
  newNode->data = data;
  newNode->next = *current;
  *current = newNode;
}

int Pop(Node **current) {
  assert(*current);
  int data = (*current)->data;
  Node *next = (*current)->next;
  free(*current);
  *current = next;
  return data;
}
