#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main(){
    int A[5];
    int i;
    for(i=0;i<5;i++){
        printf("%u \n",&A[i]);    //printing addresses
    }
    return 0;
}