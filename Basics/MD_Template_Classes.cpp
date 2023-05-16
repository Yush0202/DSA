#include<iostream>
using namespace std;

template<class T>
class Arithmetic{
    private:
        T a;
        T b;
    public:
        Arithmetic(T a,T b);
        T add();
        T sub();
};

template<class T>
Arithmetic<T>::Arithmetic(T a,T b){
    this->a=a;
    this->b=b;
}

template<class T>
T Arithmetic<T>::add(){
    T c;
    c=a+b;
    return c;
}

template<class T>
T Arithmetic<T>::sub(){
    T d;
    d=a-b;
    return d;
}

int main(){
    Arithmetic<int>a(10,5);
    cout<<a.add()<<endl;
    cout<<a.sub()<<endl;
    Arithmetic<float>a2(10.5,5.2);
    cout<<a2.add()<<endl;
    cout<<a2.sub()<<endl;
    Arithmetic<char>a3('B','A');
    cout<<(int)a3.add()<<endl;//summation going beyond 127 so
    cout<<(int)a3.sub()<<endl;//it is becoming overflow and 
    return 0;                 //thus giving negative result
}                             //see ASCII values
    
