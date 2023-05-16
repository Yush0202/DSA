#include<iostream>
using namespace std;
class Rectangle{
    private:
        int length;
        int breadth;
    public:

        Rectangle(){
            length=0;
            breadth=0;
        }
        //Rectangle(int l,int b);
        void getdata(){
            cout<<"Enter length:";
            cin>>length;
            cout<<"Enter Breadth:";
            cin>>breadth;
        }
        int area();
        int perimeter();
        void setLength(int l);
        void setBreadth(int b);
        int getLength();
        int getBreadth();
        ~Rectangle();
};
//Rectangle::Rectangle(int l,int b){
//    length=l;
//    breadth=b;
//}
int Rectangle::area(){
    return length*breadth;
}
int Rectangle::perimeter(){
    return 2*(length+breadth);
}
void Rectangle::setLength(int l){
    length=l;
}
void Rectangle::setBreadth(int b){
    breadth=b;
}
int Rectangle::getLength(){
    return length;
}
int Rectangle::getBreadth(){
    return breadth;
}
Rectangle::~Rectangle(){
    printf("Destructor called.");
}

int main(){
    Rectangle r;
    r.getdata();
    cout<<"Area:"<<r.area()<<endl;
    cout<<"Perimeter:"<<r.perimeter()<<endl;
    r.setLength(25);
    cout<<"New length:"<<r.getLength()<<endl;
    r.setBreadth(30);
    printf("New breadth:%d\n",r.getBreadth());
    cout<<"New Area:"<<r.area()<<endl;
    cout<<"New Perimeter:"<<r.perimeter()<<endl;    
    return 0;
}
