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

// * Main ===============================
int main(){

    return 0;
}

// * func ===============================
