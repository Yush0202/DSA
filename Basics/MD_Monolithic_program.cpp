#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

//monolithic program
int main()
{
    int l=0,b=0;//better initialize it 
    //if we don't initialize it will have garbage value initially
    //not compulsory to initialize,but in big sized program
    //we may face problems if we don't initialize the variable
    printf("Enter length and breadth:");
    cin>>l>>b;
    cout<<"Area:"<<l*b<<endl;
    cout<<"Perimeter:"<<2*(l+b);    
    return 0;
}