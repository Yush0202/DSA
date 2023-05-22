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


int main(){
    struct Array arr={{2,3,4,5,6},10,5};//passing array and its parameters elements,size,length
    Display(arr);

    return 0;
}