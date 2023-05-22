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

int Delete(struct Array *arr,int index){//int as it returns deleted element
    int x=0;
    int i;
    if(index>=0 && index<arr->length){
        x=arr->A[index];
        for(i=index;i<arr->length-1;i++){
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
        return x;
    }
    return 0;//if index is invalid or element is not found
}


int main(){
    struct Array arr={{2,3,4,5,6},10,5};//passing array and its parameters elements,size,length
    printf("Deleted value is:%d\n",Delete(&arr,0));
    Display(arr);

   
    return 0;
}