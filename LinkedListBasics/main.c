#include "linkedList.h"
#include <stdio.h>

void countTest() {
  Node *myList = BuildOneTwoThree();
  int count = Count(myList, 2);
  printf("%d", count);
}

void getNthTest() {
  Node *myList = BuildOneTwoThree();
  int element = getNth(myList, 2);
  printf("%d", element);
}

void DeleteListTest() {
  Node *myList = BuildOneTwoThree();
  deleteList(&myList);
}

void pushTest() {
  Node *myList = BuildOneTwoThree();
  Push(&myList, 1);
}
void PopTest() {
  struct Node *myList = BuildOneTwoThree();
  int len = Length(myList);
  printf("%d", len);
  int a = Pop(&myList);
  len = Length(myList);
  printf("%d", len);
  int b = Pop(&myList);
  len = Length(myList);
  printf("%d", len);
  int c = Pop(&myList);
  len = Length(myList);
  printf("%d", len);
}
int main() { PopTest(); }
