#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int add(int a,int b){ //function prototype,formal parameters
    int c;  //function definition
    c=a+b;
    return c;
}
int main(){
    int a=5,b=6,sum;
    sum=add(a,b);//function call, actual paramaters
    cout<<sum;
    //printf("%d",add(a,b));
    return 0;
} 