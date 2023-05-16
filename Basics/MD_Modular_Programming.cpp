#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int area(int l,int b){
    return l*b;
}
int perimeter(int l,int b){
    return 2*(l+b);
}
int main(){
    int l,b;
    printf("Enter length and breadth:");
    scanf("%d %d",&l,&b);
    cout<<"Area:"<<area(l,b)<<"\n";
    cout<<"Perimeter:"<<perimeter(l,b);
    return 0;
}