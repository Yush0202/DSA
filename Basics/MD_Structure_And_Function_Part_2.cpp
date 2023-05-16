#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;


//structure and function
//C style of programming
struct Rectangle{
    int length;
    int breadth;
};

void initialise(struct Rectangle *r,int l,int b){
    r->length=l;
    r->breadth=b;
}

int area(struct Rectangle r){
    return r.length*r.breadth;
}

int perimeter(struct Rectangle r){
    return 2*(r.length+r.breadth);
}

int main(){
    struct Rectangle r;//={10,5};
    int l,b;
    cout<<"Length:";
    cin>>l;
    cout<<"Breadth:";
    cin>>b;
    initialise(&r,l,b);
    printf("Area:%d\n",area(r));
    cout<<"Perimeter:"<<perimeter(r);
    return 0;
}


//C++ style of programming
//class Rectangle{
//    Private:
//    int length;
//    int breadth;
//    Public:
//    int area(){
//        
//    }
//};
