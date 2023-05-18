#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main(){
    int A[5];
    A[0]=0;
    A[1]=1;
    A[2]=2;
    A[3]=3;
    A[4]=4;
    int B[5]={1,2,3,4,5};
    int C[5]={2,4,6};
    int D[5]={0};
    int E[]={1,2,3,4,5,6};
    for(int i=0;i<5;i++){
        cout<<A[i]<<endl<<B[i]<<endl<<C[i]<<endl<<D[i]<<endl;
    }
    for(int i=0;i<6;i++){
        printf("%d \n",E[i]);
    }
    return 0;
    
}