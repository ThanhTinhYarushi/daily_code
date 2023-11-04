#include<iostream>
using namespace std;


struct NODE{
    int data;
    NODE* pleft;
    NODE* pright;
};

NODE* makeNode(int x){
    NODE* newNode = new NODE();
    newNode->data = x;
    newNode->pleft = newNode->pright = NULL;
    return newNode;
}
int main(){
    return 0;
}