#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<cstdlib>

using namespace std;
struct NODE{
    int data;
    NODE* pleft;
    NODE* pright;
};
typedef struct NODE* Tree;
NODE* makeNode(int x){
    NODE* newNode = new NODE();
    newNode->data = x;
    newNode->pleft = newNode->pright = NULL;
    return newNode;
}

/*insert Tree*/
int insertTree(Tree &t,int x){
	if(t != NULL){
		if(x == t->data){
			return 0;
		}	
		else{
			if(x < t->data)	insertTree(t->pleft,x);
			else insertTree(t->pright,x);
		}
	}
	else{
		t = (NODE*)malloc(sizeof(NODE));
		if(t == NULL)	return -1;
		t->data = x;
		t->pleft = t->pright = NULL;
		return 1;
	}
	return 0;
}
/*Node left right*/
void NLR(Tree t){
	if(t != NULL){
		printf("%d ", t->data);
		NLR(t->pleft);
		NLR(t->pright);
	}
}
/*Left Node Right*/
void LNR(Tree t){
	if(t != NULL){
		LNR(t->pleft);
		printf("%d ",t->data);
		LNR(t->pright);
	}
}
/*Left Right Node*/
void LRN(Tree t){
	if(t != NULL){
		LRN(t->pleft);
		LRN(t->pright);
		printf("%d ",t->data);
	}
}
struct NODE* searchTree_value(Tree t,int x){
	if(t == NULL || t->data == x){
		return t;
	}
	if(x < t->data){
		searchTree_value(t->pleft, x);
	}
	else{
		searchTree_value(t->pright, x);
	}
	return 0;
}
/*min*/
int Min(Tree t){
	if(t == NULL)	return -1;
	while(t->pleft != NULL){
		t = t->pleft;
	}
	return t->data;
}
/*max*/
int max(Tree t){
	if(t == NULL)	return -1;
	while(t->pright != NULL){
		t = t->pright;
	}
	return t->data;
}
/*destroy*/
void XoaNode(Tree &t, int data){
    if (t == NULL){
        return;
    }
    else{
        if (data < t->data){
            XoaNode(t->pleft, data);
        }
        else if (data > t->data){
            XoaNode(t->pright, data);
        }
        else{
            NODE *X = t;
            if (t->pleft == NULL){
                t = t->pright; 
            }
            else if (t->pright == NULL){
                t = t->pleft;
            }
            delete X;
        }
    }
}

int main(){
    Tree t = NULL;
    int n, x;
    cin >> n;
    for(int i=0 ; i<n ; i++){
        cin >> x;
        insertTree(t, x);
    }
    printf("Duyet NLR: ");
    NLR(t);
    printf("\n");
	//=======================
    printf("Duyet LNR: ");
    LNR(t);
    printf("\n");
	//=======================
    printf("Duyet LRN: ");
    LRN(t);
    printf("\n");
    return 0;
}