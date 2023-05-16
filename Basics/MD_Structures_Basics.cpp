#include<iostream>
#include<stdio.h>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
    char x;//it will allocate 4 bytes but use only 1 byte
    //this adjustment in memory is called padding i.e taking extra memory
} r1,r2,r3;
//struct Rectangle r1,r2,r3;
int main()
{
    //struct Rectangle r;
    //r1.length=10;
    //r1.breadth=12;
    struct Rectangle r1={19,20};
    r1.length=15;
    r1.breadth=7;
    cout<<"Area="<<r1.length*r1.breadth<<endl;
    printf("%d\n",sizeof(r1));
    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;

    return 0;
}