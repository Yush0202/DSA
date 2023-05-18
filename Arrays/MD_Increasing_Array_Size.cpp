#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main(){
    int *p,*q;
    p=(int *)malloc(5*sizeof(int));
    p[0]=3;p[1]=5;p[2]=7;p[3]=9;p[4]=11;
    for(int i=0;i<5;i++){
        printf("%d \n",p[i]);
    }
    printf("\n");
    q=(int *)malloc(10*sizeof(int));
    for(int j=0;j<5;j++){
        q[j]=p[j];
    }
    for(int i=0;i<5;i++){
        printf("%d \n",q[i]);
    }
    free(p);//delete previous array p
    p=q;//p point to array q //address of q given to p
    q=NULL;//make q point to NULL
    printf("\n");
    for(int i=0;i<5;i++){
        printf("%d \n",p[i]);
    }
    
    return 0;
}