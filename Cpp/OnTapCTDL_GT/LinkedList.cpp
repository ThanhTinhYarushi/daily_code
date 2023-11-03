 /*
 __     __                       _      _ 
 \ \   / /                      | |    (_)
  \ \_/ /__ _  _ __  _   _  ___ | |__   _ 
   \   // _` || '__|| | | |/ __|| '_ \ | |
    | || (_| || |   | |_| |\__ \| | | || |
    |_| \__,_||_|    \__,_||___/|_| |_||_|
*/
#include<stdio.h>
#include<stdlib.h>

/************
 * ! STRUCT *
 ************/
struct NODE{
    int data;
    NODE* next;
};
typedef struct NODE* Node;

// * declare
bool isEmpty(NODE* phead){ return phead == NULL; }
void init(NODE*& phead){ phead = NULL; }
NODE* makeNode(int x);
int Dem(NODE* phead);
// * Main ===============================
int main(){

    return 0;
}

// * func ===============================
/**************************
 * * CHỨC NĂNG: MAKE NODE *
 *    * TRẢ VỀ: NODE*     *
 **************************/
NODE* makeNode(int x){
    NODE* newNode = (NODE*)malloc(sizeof(NODE));
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}

/*************************
 * * CHỨC NẮNG: ĐẾM NODE *
 *  * TRẢ VỀ: SỐ NGUYÊN  *
 *************************/
int Dem(NODE* phead){
    NODE* p = phead;
    int dem = 0;
    while(p != NULL){
        ++dem;
        p = p->next;
    }
    return dem;
}
