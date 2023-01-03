//
// Created by Admin on 12/31/2022.
//
#include "stdio.h"
#include "stdlib.h"

#define MAXOFNumber 10
int toCount=0;

struct stack{
    int data[MAXOFNumber];
    int top;
};
typedef struct stack st;

int ifStackIsFull(st *myStack){
    if(myStack->top==MAXOFNumber-1){
        return 1;
    } else{
        return 0;
    }
}

int ifStackIsEmpty(st *myNumber){
    if(myNumber->top==-1){
        return 1;
    } else{
        return 0;
    }
}

void create_emptyStack(st *myNumber){
    myNumber->top=-1;
}

void pushToStack(st *myNumber, int value){

    if(ifStackIsFull(myNumber)){
        printf("Numberis full");
    } else{
        myNumber->top++;
        myNumber->data[myNumber->top]=value;
    }
    toCount++;
}
void PrintingData(st *myNumber){
    if(ifStackIsEmpty(myNumber)){
        printf("Number is Empty");
    } else{
        int place=1;
        for (int i = myNumber->top; i > -1 ; i--) {
            printf("Data %d: %d\n",place,myNumber->data[i]);
            place++;
        }
    }
}

int main(){
    st *myNumber=(st*)malloc(sizeof (st));
    create_emptyStack(myNumber);
    pushToStack(myNumber,10);
    pushToStack(myNumber,11);
    pushToStack(myNumber,12);
    pushToStack(myNumber,13);
    pushToStack(myNumber,14);

    PrintingData(myNumber);

    return 0;
}