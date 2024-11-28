#include "rbtree.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
  RBTree* t = createRBTree();
  RBNode* x = createRBNode(20);
  RBNode* y = createRBNode(18);
  RBNode* z = createRBNode(25);
  RBNode* w = createRBNode(30);
  RBNode* a = createRBNode(16);
  RBNode* b = createRBNode(22);
  RBNode* c = createRBNode(19);

  rbInsert(t, x);
  rbInsert(t, y);
  rbInsert(t, z);
  rbInsert(t, w);
  rbInsert(t, a);
  rbInsert(t, b);
  rbInsert(t, c);
  
  //printf("%d",t->root->key);
  rbPrint(t);

  leftRotate(t,x);

  rbPrint(t);
  return 0;
}
