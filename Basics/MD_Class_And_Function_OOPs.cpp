#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    public:
        void initialise(int l,int b){
            length=l;
            breadth=b;
        }
        int area(){
            return length*breadth;
        }
        int perimeter(){
            return 2*(length+breadth);
        }
        void changeLength(int r){
            length=r;
        }
};

int main(){
    Rectangle r;
    r.initialise(10,5);
    cout<<"Area:"<<r.area()<<endl;
    printf("Perimeter:%d\n",r.perimeter());
    r.changeLength(20);
    cout<<"New Area:"<<r.area()<<endl;
    printf("New Perimeter:%d\n",r.perimeter());
    return 0;
}