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

int Dem(NODE* phead){
    NODE* p = phead;
    int dem = 0;
    while(p != NULL){
        ++dem;
        phead = phead->next;
    }
    return dem;
}

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

/*insert Last -> Chèn cuối*/
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

/* insert mid */
void insertMid(NODE* &phead, int x, int pos){
    int n = Dem(phead);
    if(pos <= 0 || pos > pos + 1) printf("Vi tri chen khong hop le");
    if(n == 1){ insertFirst(phead, x); return; }
    else if(n == pos+1){ insertLast(phead, x); return; }
    NODE* p = phead;
    for(int i=0; i<pos-1 ; i++ ){
        p = p->next;
    }
    NODE* tmp = makeNode(x);
    tmp->next = p->next;
    p->next = tmp;
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

/* nhap nhieu phan tu*/
void input(NODE* &phead){
    init(phead);
    int n,x;
    scanf("%d",&n);
    for(int i=0; i<n ; i++){
        scanf("%d",&x);
        insertLast(phead,x);
    }
}



void insertVitri(NODE* &phead,int x,int vt){
    if(vt < 0){
        return;
    }
    NODE* newNode = makeNode(x);
    if(vt == 0){
        newNode->next = phead;
        phead = newNode;
        return;
    }
    NODE* p = phead;
    int vitrihientai = 0;
    while(p != NULL && vitrihientai < vt-1){
        p = p->next;
        vitrihientai++;
    }
    if(p == NULL){
        return;
    }
    newNode->next = p->next;
    p->next = newNode;
}

/* Delete First */
void DeleteFirst(NODE* &phead){
    if(isEmpty(phead))  return;
    phead = phead->next;
}

/* Deale Last */
void DeleteLast(NODE* &phead){
    if(phead == NULL)	return ;
	NODE* truoc = NULL;
	NODE* sau = phead;
	while(sau->next != NULL){
		truoc = sau;    
		sau = sau->next;
	}
	if(truoc == NULL){
		phead = NULL;
	}
	else{
		truoc->next = NULL;
	}
    free(sau);
}

/* Delete Mid */
void DeleteMid(NODE* &phead,int pos){
    if(pos <= 0 || pos > Dem(phead))    return;
    NODE *truoc = NULL, *sau = phead;
    while(sau->next != NULL){
        truoc = sau;
        sau = sau->next;
    }
    if(truoc == NULL){
        phead = phead->next;
    }
    else{
        truoc->next = sau->next;
    }
}

int main(){
	NODE* phead = NULL;
	input(phead);
	Output(phead);
    
    
    return 0;
}