#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Rectangle 
{
    int length;
    int breadth;
};

//int main()
//{
//    struct Rectangle r={10,5};
    //in C++ program if we remove struct in main , then too
    //it is valid. In C we must write struct
//    cout<<r.length<<endl;
//    cout<<r.breadth<<endl;

    //pointer to structure
//    Rectangle *p=&r;
    //when we have pointer to a structure then dot operator
    //cannot be used, we have to use arrow i.e ->
//    cout<<p->length<<endl;
//    cout<<p->breadth<<endl;
//    return 0;
//}



//dynamic allocation of rectangle structure in C language
//int main()
//{
//    struct Rectangle *p;
//    p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
//    p->length=15;
//    p->breadth=10;
//    cout<<p->length<<endl;
//    cout<<p->breadth<<endl;
//    return 0;
//}



//dynamic allocation of rectangle structure in C++
int main()
{
    struct Rectangle *p;
    p=new Rectangle;

    p->length=15;
    p->breadth=10;
    cout<<p->length<<endl;
    cout<<p->breadth<<endl; 
    return 0;
}