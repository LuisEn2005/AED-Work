#ifndef LIST_H
#define LIST_H
struct Node;
struct Node* buildOneTwoThree();
int length(struct Node*);
void wrongPush(struct Node*, int);
void changeToNull(struct Node**);
#endif
