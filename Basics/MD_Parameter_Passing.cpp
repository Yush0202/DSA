#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

//pass by value
//int add(int a,int b){
//    int c;
//    c=a+b;
//    cout<<c<<endl;
//    a++;
//    cout<<a<<endl;
//    return 0;
//}
//int main(){
//    int x=10,y=23,sum;
//    sum=add(x,y);
//    cout<<x;
//    return 0;
//}


//pass by address
//when we want function to directly work on actual parameter
//void swap(int *x,int *y){ //parameters take pointers  
//    int temp;                 
//    temp=*x;//dereferencing
//    *x=*y;
//    *y=temp; 
//}
//int main(){
//    int a=10,b=15;
//    swap(&a,&b); // address of actual parameters in calling
//    cout<<a<<" "<<b;
//    return 0;
//}



//pass by reference
void swap(int &x,int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}

int main(){
    int a=23,b=43;
    swap(a,b);
    cout<<a<<" "<<b;
    return 0;
}

