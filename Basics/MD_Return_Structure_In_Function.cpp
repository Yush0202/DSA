#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

//structure as parameter by call by value
//function to print length and breadth
//void fun(struct Rectangle rect){
//    rect.length=20;
//    rect.breadth=15;
//    cout<<"Length "<<rect.length<<endl<<"Breadth "<<rect.breadth<<endl;
//}

//print length and breadth
//int main(){
//    struct Rectangle r={10,5};
//    fun(r);
//    printf("Length %d \nBreadth %d\n",r.length,r.breadth);
//    return 0;
//}



//structure as parameter by call by address
//void fun(struct Rectangle *p){
//    p->length=20;
//    p->breadth=15;
//    cout<<"Length "<<p->length<<endl<<"Breadth "<<p->breadth;
//}
//the function will modify values of main function
//print length and breadth
//int main(){
//    struct Rectangle r={10,5};
//    fun(&r);
//    printf("\nLength %d \nBreadth %d\n",r.length,r.breadth);
//    return 0;
//}


//create a variable of type structure on heap inside a function
//and return its address

struct Rectangle *fun(){
    struct Rectangle *p;
    //p=new Rectangle; (In C++)
    p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    p->length=15;
    p->breadth=7;//function fun() has created object in heap
    return p;
}

int main(){
    struct Rectangle *ptr=fun();
    cout<<"Length "<<ptr->length<<endl<<"Breadth "<<ptr->breadth;
    return 0;
}