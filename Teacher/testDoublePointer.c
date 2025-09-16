#include<stdio.h>
#include"list.h"

int main(){
  struct Node* head1 = buildOneTwoThree();
  struct Node* head2 = buildOneTwoThree(); 

  changeToNull(&head1);
  changeToNull(&head2);

  return 0;
}

