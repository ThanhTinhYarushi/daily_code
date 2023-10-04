#include<stdio.h>
#include<stdlib.h>

struct NODE{
    int data;
    struct NODE* next;
};
typedef struct NODE* Node;
NODE* makeNode(int x){
    NODE* newNode = (NODE*)malloc(sizeof(NODE));
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}

void init(NODE* &phead){ phead = NULL; }

bool isEmpty(NODE* phead){ phead == NULL; }

/*insert First -> Chèn Đầu*/
void insertFirst(NODE* &phead,int x){
    NODE* newNode = makeNode(x);
    if(isEmpty(phead)){
        phead = newNode;
    }
    else{
        newNode->next = phead;
        phead = newNode;
    }
}


int main(){

    return 0;
}