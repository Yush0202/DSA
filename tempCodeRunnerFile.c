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

void Append(struct Array *arr,int x){
    //as it is going to modify array it should be call by address type
    if(arr->length<arr->size)
        arr->A[arr->length++]=x;//store arr.A[arr.length] in x and the increment length

}


int main(){
    struct Array arr={{2,3,4,5,6},20,5};//passing array and its parameters elements,size,length
    Append(&arr,10); //passed address of arr and value 10
    Display(arr);

   
    return 0;
}