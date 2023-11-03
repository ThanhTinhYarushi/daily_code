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
void insertFirst(NODE* &phead,int x);
void insertLast(NODE* &phead,int x);
void insertMid(NODE* &phead, int x, int pos);
int findNode(NODE* phead, int x);
void insertAfter(NODE* &phead,int x,int y);
void insertVitri(NODE* &phead, int x, int vt);
void DeleteFirst(NODE* &phead); 
void DeleteLast(NODE* &phead); 
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

/************************************************
 * * CHỨC NĂNG: CHÈN VÀO ĐẦU DANH SÁCH LIÊN KẾT *
 *               * TRẢ VỀ : KHÔNG               *
 ************************************************/
void insertFirst(NODE* &phead,int x){
    NODE* tmp = makeNode(x);
    if(isEmpty(phead)){ phead = tmp;}
    else{
        tmp->next = phead;
        phead = tmp;
    }
}

/*************************************************
 * * CHỨC NĂNG: CHÈN VÀO CUỐI DANH SÁCH LIÊN KẾT *
 *                * TRẢ VỀ: KHÔNG                *
 *************************************************/
void insertLast(NODE* &phead,int x){
    NODE* tmp = makeNode(x);
    if(isEmpty(phead)){ phead = tmp; }
    else{
        NODE* p = phead;
        while(p->next != NULL){
            p = p->next;
        }
        p->next = tmp;
    }
}

/**********************************************
 * * CHỨC NĂNG: CHÈN NODE TẠI VỊ TRÍ CẦN THÊM *
 *              * TRẢ VỀ: KHÔNG               *
 **********************************************/
void insertMid(NODE* &phead, int x, int pos){
    int n = Dem(phead);
    NODE* tmp = makeNode(x);
    if(pos <= 0 || pos > n+1){
        printf("Vi Tri chen khong hop le");
        return;
    }
    if(pos == 1){
        insertFirst(phead, x);
        return;
    }
    else if(pos == n+1){
        insertLast(phead, x);
        return;
    }
    NODE* p = phead;
    for(int i = 0; i < pos - 1 ; i++){
        p = p->next;
    }
    tmp->next = p->next;
    p->next = tmp;
}

/**************************************
 * * CHỨC NĂNG: TÌM NODE CÓ GIÁ TRỊ X *
 *           * TRẢ VỀ: INT            *
 **************************************/
int findNode(NODE* phead, int x){
    NODE* p = phead;
    int found = 0;
    while(p != NULL){
        if(x == p->data){
            found++;
            return 1;
        }
        p = p->next;
    }
    if(!found){
        return 0;
    }
}

/***************************************
 * * CHỨC NĂNG: CHÈN NODE Y SAU NODE X *
 *          * TRẢ VỀ : KHÔNG           *
 ***************************************/
void insertAfter(NODE* &phead,int x,int y){
    NODE* p = phead;
    if(isEmpty(phead)){ return; }
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

/***************************************
 * * CHỨC NĂNG: CHÈN NODE X TẠI VỊ TRÍ *
 *          * TRẢ VỀ : KHÔNG           *
 ***************************************/
void insertVitri(NODE* &phead, int x, int vt){
    if(vt < 0)  return;
    NODE* newNode = makeNode(x);
    if (vt == 0)
    {
        newNode->next = phead;
        phead = newNode;
        return;
    }
    NODE* p = phead;
    int vthientai = 0;
    while(p != NULL && vthientai < vt-1){
        p = p->next;
        vthientai++;
    }
    if(p == NULL){
        return;
    }
    newNode->next = p->next;
    p->next = newNode;
}

/**********************************
 * * CHỨC NĂNG: XOÁ NODE ĐẦU TIÊN *
 *        * TRẢ VỀ: KHÔNG         *
 **********************************/
void DeleteFirst(NODE* &phead){

    if(isEmpty(phead)){ return;}
    phead = phead  ->next;

}

/***********************************
 * * CHỨC NĂNG: XOÁ NODE CUỐI CÙNG *
 *         * TRẢ VỀ: KHÔNG         *
 ***********************************/
void DeleteLast(NODE* &phead){
    if(phead == NULL)   return;
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