#include<stdio.h>
#include<stdlib.h>

struct Array{
    //int *A; for heap
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr){
    int i;
    printf("\nElements  are:\n");
    for(i=0;i<arr.length;i++){
        printf("%d ",arr.A[i]);
    }
}

void swap(int *x,int *y){//we use pointer when we have to make changes in actual values not their copies
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}


int Linearsearch(struct Array arr,int key){ //normal function for linear search
    int i;
    for(i=0;i<arr.length;i++){
        if (key==arr.A[i])
           return i;
    }
    return -1;
}


int improvedLinearsearch1(struct Array *arr,int key){//as it will modify actual array   
    for(int i=0;i<arr->length;i++){
        if (key==arr->A[i]){
            swap(&arr->A[i],&arr->A[i-1]);//Transposition(1st Method)
           return i;
        }
    }
    return -1;
}


int improvedLinearsearch2(struct Array *arr,int key){//it will also modify actual array
    for(int i=0;i<arr->length;i++){
        if(key==arr->A[i]){
            swap(&arr->A[i],&arr->A[0]);//move to front/head
            return i;
        }
    }
    return -1;
}

int main(){
    struct Array arr={{2,3,4,5,6},10,5};//passing array and its parameters elements,size,length
    printf("\n%d\n",improvedLinearsearch2(&arr,5));
    Display(arr);

   
    return 0;
}