#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int c(int n,int r){
    if(r==0 || r==n)
        return 1;
    return c(n-1,r-1)+c(n-1,r);
}

int main(){
    int a=4;
    printf("%d",c(4,2));
    return 0;
}