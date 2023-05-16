#include<iostream>
using namespace std;

class Arithmetic{
    private:
        int a;
        int b;
    public:
        Arithmetic(int a,int b);
        int add();
        int sub();
};

Arithmetic::Arithmetic(int a,int b){
    this->a=a;
    this->b=b;
}

int Arithmetic::add(){
    int c;
    c=a+b;
    return c;
}

int Arithmetic::sub(){
    int d;
    d=a-b;
    return d;
}

int main(){
    Arithmetic a(10,5);
    cout<<a.add()<<endl;
    cout<<a.sub();
    return 0;
}