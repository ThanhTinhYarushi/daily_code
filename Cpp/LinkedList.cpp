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

bool isEmpty(NODE* phead){ return phead == NULL; }

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

/*insert Last*/
void insertLast(NODE* &phead,int x){
    NODE* newNode = makeNode(x);
    if(isEmpty(phead)){
        phead = newNode;
    }
    else{
        NODE* p = phead;
        while(p->next != NULL){
            p = p->next;
        }
        p->next = newNode;
    }

}

/* Duyet */
void Output(NODE* phead){
	NODE* p = phead;
	while(p != NULL){
		printf("%d ",p->data);
		p = p->next;
	}
}

/* Find */
int FindNode(NODE* phead,int x){
    NODE* p = phead;
    int found = 0;
    while(p != NULL){
        if(x == p->data){
            ++found;
            return 1;
        }
        p = p->next;
    }
    if(!found){
        return 0;
    }
}

/* Chen Y Sau X*/
void insertAfter(NODE* &phead,int x,int y){
    NODE* p = phead;
    while(p != NULL){
        if(p->data == x){
            NODE* newNode = makeNode(y);
            newNode->next = p->next;
            p->next = newNode;
            return;
        }
        p = p->next;
    }
}

void input(NODE* &phead){
    init(phead);
    int n,x;
    scanf("%d",&n);
    for(int i=0; i<n ; i++){
        scanf("%d",&x);
        insertLast(phead,x);
    }
}

int main(){
	NODE* phead = NULL;
	input(phead);
	int x,y;
    scanf("%d%d",&x,&y);
    insertAfter(phead,x,y);
    Output(phead);

    return 0;
}