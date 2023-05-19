#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main(){
    int A[3][4]={{1,2,3,4},{2,4,6,8},{1,3,5,7}};//create 2D array in stack

    int *B[3];//array of pointers in stack
    int **C;//pointer in heap

    int i,j;

    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    B[0]=(int *)malloc(4*sizeof(int));//array in heap
    B[1]=(int *)malloc(4*sizeof(int));//array in heap
    B[2]=(int *)malloc(4*sizeof(int));//array in heap

        for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    C=(int **)malloc(3*sizeof(int)); //array of pointer in heap
    C[0]=(int *)malloc(4*sizeof(int));//array in heap
    C[1]=(int *)malloc(4*sizeof(int));//array in heap
    C[2]=(int *)malloc(4*sizeof(int));//array in heap

        for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }


    return 0;
}