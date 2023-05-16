#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int a=10;
    int &r=a;//reference must be declared and initialised
    cout<<r<<" "<<a<<endl;
    r=25;
    cout<<r<<" "<<a<<endl;
    int b=30;
    r=b;
    cout<<a<<" "<<r<<endl;
    return 0;
}