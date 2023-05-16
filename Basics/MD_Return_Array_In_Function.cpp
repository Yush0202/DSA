#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

//void fun(int A[ ],int n)
//instead of using square brackets
//we can also use *, it will still be treated as an array 
//void fun(int *A,int n)
//{
//    A[0]=15;
//    //for(int a:A) for each loop cannot be used on pointer
//    //for each loop can only be used on array
//    //cout<<a<<endl;
//    for(int i=0;i<n;i++){
//        cout<<A[i]<<endl;
//    }
//}
//int main(){
//    int A[]={2,4,6,8,10};
//    int n=5;
//    fun(A,n);
//    //cout<<sizeof(A)/sizeof(int)<<endl;
//    for(int x:A){
//        cout<<x<<" ";
//    }
//}
//int *fun(int n){
//    int *p;
//    p=(int *)malloc(n*sizeof(int));
//    return p;
//}
//int main(){
//    int *a;
//    a=fun(5);
//    return 0;
//}

int *fun(int size){
    int *p;
    p=(int*)malloc(size*sizeof(int));
    //or we can use p=new int[size];
    for(int i=0;i<size;i++){
        p[i]=i+1;
    }
    return p;
}
int main(){
    int *ptr,sz=7;
    ptr=fun(sz);
    for(int i=0;i<sz;i++){
        cout<<ptr[i]<<endl; 
    }
    return 0;
}