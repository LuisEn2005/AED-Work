#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <wchar.h>
#include "rbtree.h"

RBNode* createRBNode(int key){
  RBNode* newNode = malloc(sizeof(RBNode));
  newNode->parent = NULL;
  newNode->left = NULL;
  newNode->right = NULL;
  newNode->key = key;
  newNode->color = RED;
  return newNode;
}

RBTree* createRBTree(){
  RBTree* t = malloc(sizeof(RBTree));
  t->root = NULL;
  return t;
}

int isRootBlack(RBTree *t){
  if(!t->root) return 1;
  return t->root->color == BLACK;
}

void rbInsert(RBTree *t, RBNode* z){
  RBNode* x = t->root;
  RBNode* y = NULL;

  while(x){
    y = x;
    if(z->key < x->key)
      x = x->left;
    else 
      x = x->right;
  }

  z->parent = y;

  if(!y)
    t->root = z;
  else{
    if(z->key < y->key)
      y->left = z;
    else
      y->right = z;
  }
  //rbInsertFixUp(t, z);
}

void leftRotate(RBTree* t, RBNode* x){
  assert(x != NULL);
  RBNode* y = x->right;
  RBNode* B = y->left;
  RBNode* z = x->parent;
  
  x->right = B;
  if(B) B->parent = x;
  if(z == NULL) t->root = y;
  else
    z = y;

  y->left = x;
}

void rightRotate(RBTree* t, RBNode* y){
  assert(y != NULL);
  assert(y->left != NULL);
  RBNode* x = y->left;
  RBNode* B = x->right;
  RBNode* z = y->parent;
  if(z == NULL) x = t->root;
  else
    x = z;
  x->right = y;
  y->parent = x;
  y->left = B;
}
void recurRBPrint(RBNode* z){
  if(z == NULL) return;
  printf("%d\n",z->key);
  recurRBPrint(z->left);
  recurRBPrint(z->right);
}
void rbPrint(RBTree* t){
  RBNode* x = t->root;
  //RBNode* y = NULL;
  recurRBPrint(x);
}
