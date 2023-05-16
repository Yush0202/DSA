#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

void fun1(int x){
    if(x>0){
        printf("%d\n",x);
        fun1(x-1);
    }
}

int main(){
    int x=3;
    fun1(x);
}