#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

void initialize(struct Rectangle *r,int a,int b){
    r->length=a;
    r->breadth=b;
}

int area(struct Rectangle r){
    return r.length*r.breadth;
}

void changeLength(struct Rectangle *r,int a){
    r->length=a;
}

int main(){
    struct Rectangle r;
    initialize(&r,10,15);
    cout<<"Length "<<r.length<<" Breadth "<<r.breadth<<endl;
    cout<<"Area "<<area(r)<<endl;
    changeLength(&r,20);
    cout<<"New Length "<<r.length<<endl;
    cout<<"New Area "<<area(r);
}