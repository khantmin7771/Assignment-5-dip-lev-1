//
// Created by Khant Min on 12/31/2022.
// Step = 20 percent of Array.

#include "stdio.h"
#include "math.h"

int min(int first,int second){
    if(second>first){
        return first;
    } else{
        return second;
    }
}

int jumpSearch(int arr[],int size,int key){
    int twentyPofSize=size/5;
    int step= size/twentyPofSize;
    int previous=0;
    while(arr[min(step,size)-1]< key){
        previous=step;
        step=step+ sqrt(size);
        if(previous>=size){
            return -1;
        }
    }
    for (int i = previous; i < step ; ++i) {
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}


int main(){

    int arr[]={1,2,3,4,5,6,7,8,9,100,101,102};
    int size=sizeof(arr)/sizeof(arr[0]);
    int toFind=100;
    int indexNumber=jumpSearch(arr,size,toFind);
    if (indexNumber!=-1) {
        printf("Found at index:%d data:%d", indexNumber, arr[indexNumber]);
    }else{
        printf("Data Not Found");
    }
    return 0;
}