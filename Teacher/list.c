#include <stdlib.h>
#include "list.h"

struct Node {
  int data;
  struct Node* next;
};

struct Node* buildOneTwoThree(){

  struct Node* head = malloc(sizeof(struct Node));
  head->data = 1;
  head->next = malloc(sizeof(struct Node));

  head->next->data = 2;
  head->next->next = malloc(sizeof(struct Node));

  head->next->next->data = 3;
  head->next->next->next = NULL;

  return head;
}

int length(struct Node* head){
  int c = 0;
  while(head){
    c++;
    head = head->next;
  }
  return c;
}

void wrongPush(struct Node* head, int data){
  struct Node* newNode = malloc(sizeof(struct Node));
  newNode->data = data;
  
  newNode->next = head;

  head = newNode;
}

void changeToNull(struct Node** headRef){
  *headRef = NULL;
}
